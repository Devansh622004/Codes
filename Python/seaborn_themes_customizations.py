# | Style         | Description                               |
# | ------------- | ----------------------------------------- |
# | `"darkgrid"`  | Default — grey background with grid lines |
# | `"whitegrid"` | White background with grid lines          |
# | `"dark"`      | Dark background without grid lines        |
# | `"white"`     | Completely white background               |
# | `"ticks"`     | Minimal look with small ticks on axes     |

import seaborn as sns
import matplotlib.pyplot as plt

data = sns.load_dataset("tips")
sns.barplot(x="day", y="total_bill", data=data)
plt.title("Average Total Bill per Day")
sns.set_style("ticks")
plt.show()


