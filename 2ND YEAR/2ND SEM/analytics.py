import pandas as pd

mydataset_2d = {
    'cars': ["Toyota", "Mitsubishi", "Honda"],
    'ratings': [1, 3, 5]
}

mydataset_1d = [2, 0, 2, 2]

df_2d = pd.DataFrame(mydataset_2d)  
series_1d = pd.Series(mydataset_1d)
series_with_index = pd.Series(mydataset_1d, index=["a", "k", "i", "m"])

print("Two-dimensional DataFrame:\n", df_2d)
print("\nOne-dimensional Series:", series_1d.to_string())
print("\nFirst value of the Series:", series_1d[0])
print("\nValue with label 'a':", series_with_index["a"])
print("\nFirst row of the DataFrame:\n", df_2d.loc[0])