import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
import statistics as st

# Step 1: Read the dataset
data = pd.read_csv(r"Code-Log-Github/JSPM/PYTHON_JSPM/Journal/iris.csv")
print(data.head())
print(data.tail())
print("Mean:",np.mean(data["sepal_length"]))
print("Median:",np.median(data["sepal_length"]))
print("Mode:",st.mode(data["sepal_length"]))


# Step 2: Select a numeric column for histogram
# You can change this to:
# "SepalWidthCm", "PetalLengthCm", "PetalWidthCm"
values = data["sepal_length"]



# Step 3: Plot histogram
plt.hist(values, bins=10, edgecolor="black")

plt.title("Histogram of Sepal Length")
plt.xlabel("Sepal Length (cm)")
plt.ylabel("Frequency")

plt.show()