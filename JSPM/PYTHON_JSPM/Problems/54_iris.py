import pandas as pd
import numpy as np

# iris = pd.read_csv(iris.csv)
# iris = pd.read_csv("Code-Log-Github/JSPM/PYTHON_JSPM/Problems/iris.csv")
iris = pd.read_csv("/Users/sohamgonge/Documents/GitHub/Code-Log-Github/JSPM/PYTHON_JSPM/Problems/iris.csv")
start = iris.head()
print("\n\n---------------Printing IRIS File-------------\n\n")
print(iris)
print("\n\n---------------Printing First 5 Rows of IRIS File-------------\n\n")
print(start)
# OR print(iris.head())
print("\n\n---------------Printing Last 5 Rows of IRIS File-------------\n\n",iris.tail())
# OR print(iris.tail())
# ending = iris.tail()
# print(ending)

