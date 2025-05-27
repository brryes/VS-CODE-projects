#include <iostream>
#include <vector>
#include <chrono>
#include <cstdlib>
#include <thread>
#include <mutex>

using namespace std;

const long MAX = 500000000;
const int RANGE = 6;

vector<int> num(MAX);
unsigned long long int sum = 0;
int h1 = 0, h2 = 0, h3 = 0, h4 = 0, h5 = 0;

mutex hist_mutex;

void calculateSum() {
    unsigned long long int local_sum = 0;
    for (long i = 0; i < MAX; i++) {
        local_sum += num[i];
    }
    sum = local_sum;
}

void calculateHistogram() {
    int local_h1 = 0, local_h2 = 0, local_h3 = 0, local_h4 = 0, local_h5 = 0;
    for (long i = 0; i < MAX; i++) {
        switch (num[i]) {
            case 1: local_h1++; break;
            case 2: local_h2++; break;
            case 3: local_h3++; break;
            case 4: local_h4++; break;
            case 5: local_h5++; break;
        }
    }
    lock_guard<mutex> lock(hist_mutex);
    h1 = local_h1;
    h2 = local_h2;
    h3 = local_h3;
    h4 = local_h4;
    h5 = local_h5;
}

int main() {
    cout << "Generating random numbers...\n";
    for (long i = 0; i < MAX; i++) {
        num[i] = rand() % RANGE;
    }

    const double original_runtime_ms = 2000.0;

    auto start = chrono::high_resolution_clock::now();

    thread t1(calculateSum);
    thread t2(calculateHistogram);

    t1.join();
    t2.join();

    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);

    cout << "Histogram Result is : " << endl;
    cout << "1  ----> " << h1 << " SUM : " << h1 << endl;
    cout << "2  ----> " << h2 << " SUM : " << h2 * 2 << endl;
    cout << "3  ----> " << h3 << " SUM : " << h3 * 3 << endl;
    cout << "4  ----> " << h4 << " SUM : " << h4 * 4 << endl;
    cout << "5  ----> " << h5 << " SUM : " << h5 * 5 << endl;

    unsigned long long int histogramsum = h1 + (h2 * 2) + (h3 * 3) + (h4 * 4) + (h5 * 5);

    cout << "The sum of the vector is : " << sum << " and the sum of the histogram is " << histogramsum << endl;

    cout << "TOTAL RUNNING TIME IS : " << duration.count() << " milliseconds...." << endl;

    double speedup = (original_runtime_ms / duration.count()) * 100.0;
    cout << "Speedup compared to original program: " << speedup << " %" << endl;

    return 0;
}
