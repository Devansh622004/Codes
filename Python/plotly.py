import plotly.express as px

# 📉 1️⃣ LINE PLOT
fig = px.line(data, x="size", y="total_bill", title="Line Plot")
fig.show()

# 📊 2️⃣ BAR PLOT
fig = px.bar(data, x="day", y="total_bill", color="sex", barmode="group")
fig.show()

# ⚫ 3️⃣ SCATTER PLOT
fig = px.scatter(data, x="total_bill", y="tip", color="day", size="size")
fig.show()

# 🧱 4️⃣ HISTOGRAM
fig = px.histogram(data, x="total_bill", nbins=20, color="sex")
fig.show()

# 🎻 5️⃣ VIOLIN PLOT
fig = px.violin(data, y="tip", x="day", color="sex", box=True, points="all")
fig.show()

# ⏳ 6️⃣ GANTT CHART (for tasks/timeline)
import plotly.figure_factory as ff

data_gantt = [
    dict(Task="Task A", Start='2025-11-01', Finish='2025-11-05'),
    dict(Task="Task B", Start='2025-11-03', Finish='2025-11-08')
]

fig = ff.create_gantt(data_gantt)
fig.show()

# 🔥 7️⃣ HEATMAP
fig = px.imshow(corr, text_auto=True, color_continuous_scale="RdBu")
fig.show()

# 🧭 8️⃣ 3D SCATTER PLOT
fig = px.scatter_3d(data, x="total_bill", y="tip", z="size", color="day")
fig.show()

# 🧠 EXAM PREP SUMMARY
# Category	Seaborn Function	Plotly Equivalent
# Line	sns.lineplot()	px.line()
# Bar	sns.barplot()	px.bar()
# Scatter	sns.scatterplot()	px.scatter()
# Histogram	sns.histplot()	px.histogram()
# Violin	sns.violinplot()	px.violin()
# Box	sns.boxplot()	px.box()
# Heatmap	sns.heatmap()	px.imshow()
# Matrix / Cluster	sns.clustermap()	—
# 3D Plot	—	px.scatter_3d()
# Gantt	—	ff.create_gantt()