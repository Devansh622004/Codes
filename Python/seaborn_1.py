import seaborn as sns
import matplotlib.pyplot as plt

for i in sns.get_dataset_names():
    print(i)
data = sns.load_dataset("tips")

# Types of Plots:-
# 📊 1. RELATIONAL PLOTS
# Used to visualize relationships between numeric variables.
# 1️⃣ sns.scatterplot()
sns.scatterplot(x="total_bill", y="tip", data=data, hue="day", style="time")
# hue → color by category
# style → change marker style
# size → marker size

# 2️⃣ sns.lineplot()
sns.lineplot(x="size", y="tip", data=data, marker='o')
# Shows trends or changes — good for time-series or continuous data.
# ✅ Exam Tip:
# Difference between scatterplot and lineplot — scatter shows individual points, lineplot connects them.

# 🧁 2. CATEGORICAL PLOTS
# Used when one or both variables are categorical.
# 1️⃣ sns.barplot()
# Shows average value of a numeric variable per category.
sns.barplot(x="day", y="total_bill", data=data)

# 2️⃣ sns.countplot()
# Shows count of each category.
sns.countplot(x="day", data=data)

# 3️⃣ sns.boxplot()
# Shows data distribution, outliers, and quartiles.
sns.boxplot(x="day", y="tip", data=data)

# 4️⃣ sns.violinplot()
# Combination of boxplot + kernel density estimate.
sns.violinplot(x="day", y="tip", data=data, palette="muted")

# 5️⃣ sns.stripplot()
# Shows individual observations.
sns.stripplot(x="day", y="tip", data=data, jitter=True)

# 6️⃣ sns.swarmplot()
# Similar to stripplot but prevents overlapping.
sns.swarmplot(x="day", y="tip", data=data)

# 📈 3. DISTRIBUTION PLOTS
# Used to understand data distribution.
# 1️⃣ sns.histplot()
sns.histplot(data["total_bill"], bins=20, kde=True)

# 2️⃣ sns.kdeplot()
sns.kdeplot(data["total_bill"], shade=True)

# 3️⃣ sns.displot()
# High-level wrapper for histplot and kdeplot.
sns.displot(data=data, x="tip", kde=True, bins=15)

# 4️⃣ sns.rugplot()
# Marks individual data points on an axis.
sns.rugplot(x="tip", data=data)

# 🧮 4. MATRIX PLOTS
# Used for correlation and heatmap visualizations.
# 1️⃣ sns.heatmap()
corr = data.corr()
sns.heatmap(corr, annot=True, cmap="coolwarm")
# annot=True → shows numeric values
# cmap → color map

# 2️⃣ sns.clustermap()
# Groups similar rows/columns together.
sns.clustermap(corr, cmap="viridis", annot=True)

plt.title("Average Total Bill per Day")

# 🎨 5. SEABORN THEMES & SETTINGS

sns.set_style("whitegrid")       # whitegrid, darkgrid, white, dark, ticks
sns.set_context("talk")          # paper, notebook, talk, poster
sns.set_palette("pastel")        # deep, muted, dark, colorblind, bright, pastel

sns.despine()  # removes top and right borders
plt.show()

# Seaborn includes several built-in example datasets.
# "tips" is one such dataset — it contains data about restaurant bills and tips, with columns like:
# total_bill — total amount of the bill
# tip — tip given
# sex — gender of the server
# day — day of the week
# time — lunch or dinner
# size — number of people at the table
# The dataset is loaded into a Pandas DataFrame named data.