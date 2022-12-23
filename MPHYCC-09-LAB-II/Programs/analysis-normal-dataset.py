#----Data Analysis-Statistical Parameters Calculation (Normal Dataset)----

import statistics as st

heights = [162.31, 152.21, 183.92, 167.97, 175.92, 156.40, 186.60, 167.13, 189.45, 186.43, 172.19, 172.88, 185.98, 182.43, 174.11, 149.17, 162.00, 184.44, 175.21, 154.34, 187.51, 195.03, 192.90, 197.49, 183.81, 163.85, 163.10, 172.14, 168.20, 161.63]

print("Average/Mean : ", st.mean(heights))
print("Median : ", st.median(heights))
print("Low-Median : ", st.median_low(heights))
print("High-Median : ", st.median_high(heights))
print("Mode : ", st.mode(heights))

largest_value = max(heights) 
smallest_value = min(heights)
print("Range : ", (largest_value-smallest_value))

print("Variance : ", st.variance(heights))
print("Standard Deviation : ", st.stdev(heights))


'''
Data Source : Kaggle.com
IDE : VS Code
'''