import matplotlib.pyplot as plt

# --- Sci-Fi Style Customization ---
plt.style.use('dark_background')  # Dark theme
plt.rcParams['figure.figsize'] = (12, 6)
plt.rcParams['axes.facecolor'] = '#0d0d0d'
plt.rcParams['axes.edgecolor'] = '#00ffff'
plt.rcParams['axes.titlesize'] = 20
plt.rcParams['axes.titleweight'] = 'bold'
plt.rcParams['axes.labelsize'] = 14
plt.rcParams['axes.labelcolor'] = '#00ffff'
plt.rcParams['xtick.color'] = '#00ffff'
plt.rcParams['ytick.color'] = '#00ffff'
plt.rcParams['grid.color'] = '#00ffff'
plt.rcParams['grid.linestyle'] = ':'
plt.rcParams['grid.alpha'] = 0.3
plt.rcParams['lines.linewidth'] = 3
plt.rcParams['font.family'] = 'monospace'
plt.rcParams['legend.facecolor'] = '#0d0d0d'
plt.rcParams['legend.edgecolor'] = '#00ffff'

# --- Data ---
virat = [623, 739, 1460, 1202, 1377, 431, 1100, 950, 1050, 1100, 1050]
rohit = [815, 564, 1293, 1030, 1490, 1000, 1100, 950, 1050, 1100, 1000]
virender = [99, 217, 31]

# --- Plot ---
plt.plot(virat, color='#ff1a1a', linestyle='-', marker='o', label='Virat Kohli Runs')
plt.plot(rohit, color='#33ff33', linestyle='-', marker='o', label='Rohit Sharma Runs')
plt.plot(virender, color='#3399ff', linestyle='-', marker='o', label='Virender Sehwag Runs')

plt.title('🏏 Cricket Runs Over Years')
plt.xlabel("Years")
plt.ylabel("Runs")
plt.grid(True)
plt.legend()
plt.show()
