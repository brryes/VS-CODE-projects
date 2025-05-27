import matplotlib.pyplot as plt
import numpy as np

y = np.array([35, 25, 25, 15])
phone = np.array(["Samsung", "iPhone", "Huawei", "Oppo"])

plt.pie(y, labels=phone)
plt.show() 

