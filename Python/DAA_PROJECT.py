# Advanced Sorting Visualizer (5 Algorithms)
# pip install matplotlib
# Run: python advanced_sorting_visualizer.py

import time
import random
import tkinter as tk
from tkinter import ttk, messagebox
import matplotlib
matplotlib.use("TkAgg")
import matplotlib.pyplot as plt
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg


class SortingVisualizer:
    def __init__(self, root):
        self.root = root
        self.root.title("Advanced Sorting Algorithm Visualizer")
        self.root.geometry("950x650")
        self.root.configure(bg="#1e1e2f")

        self.selected_algorithm = tk.StringVar(value="Bubble Sort")
        self.data = []
        self.is_sorting = False

        self.create_ui()

    def create_ui(self):
        title = tk.Label(self.root, text="Sorting Algorithm Visualizer (5 Algorithms)",
                         font=("Consolas", 18, "bold"), bg="#1e1e2f", fg="#00ffcc")
        title.pack(pady=10)

        control_frame = tk.Frame(self.root, bg="#252538")
        control_frame.pack(fill="x", padx=10, pady=6)

        # Algorithm selection
        tk.Label(control_frame, text="Algorithm:", bg="#252538", fg="white").grid(row=0, column=0, padx=6, pady=6)
        algo_menu = ttk.Combobox(control_frame, textvariable=self.selected_algorithm,
                                 values=["Bubble Sort", "Insertion Sort", "Selection Sort", "Quick Sort", "Merge Sort"],
                                 width=18, state="readonly")
        algo_menu.grid(row=0, column=1, padx=6, pady=6)

        # Array size
        tk.Label(control_frame, text="Array Size:", bg="#252538", fg="white").grid(row=0, column=2, padx=6)
        self.size_var = tk.IntVar(value=40)
        ttk.Spinbox(control_frame, from_=5, to=200, textvariable=self.size_var, width=6).grid(row=0, column=3, padx=6)

        # Speed slider (ms)
        tk.Label(control_frame, text="Delay (ms):", bg="#252538", fg="white").grid(row=0, column=4, padx=6)
        self.speed_scale = tk.Scale(control_frame, from_=1, to=200, length=180, orient=tk.HORIZONTAL,
                                    bg="#252538", fg="white")
        self.speed_scale.set(20)
        self.speed_scale.grid(row=0, column=5, padx=6)

        # Buttons
        tk.Button(control_frame, text="Generate Array", bg="#00b894", fg="white",
                  command=self.generate_data).grid(row=0, column=6, padx=6)
        tk.Button(control_frame, text="Start Sorting", bg="#0984e3", fg="white",
                  command=self.start_sorting).grid(row=0, column=7, padx=6)
        tk.Button(control_frame, text="Stop", bg="#d63031", fg="white",
                  command=self.stop_sorting).grid(row=0, column=8, padx=6)

        # Matplotlib figure
        self.fig, self.ax = plt.subplots(figsize=(9, 4.5))
        self.fig.patch.set_facecolor("#1e1e2f")
        self.ax.set_facecolor("#0b0b10")
        self.canvas = FigureCanvasTkAgg(self.fig, master=self.root)
        self.canvas.get_tk_widget().pack(fill="both", expand=True, padx=10, pady=10)

        self.generate_data()

    # ------------------- Data + Draw -------------------
    def generate_data(self):
        if self.is_sorting:
            return
        n = max(5, min(200, int(self.size_var.get())))
        self.data = [random.randint(1, 100) for _ in range(n)]
        self.draw_data(self.data, ['#00cec9' for _ in range(len(self.data))])

    def draw_data(self, data, color_array):
        self.ax.clear()
        self.ax.bar(range(len(data)), data, color=color_array, align="edge")
        self.ax.set_xticks([])
        self.ax.set_yticks([])
        self.canvas.draw()
        self.root.update_idletasks()

    # ------------------- Control -------------------
    def start_sorting(self):
        if self.is_sorting:
            return
        if not self.data:
            messagebox.showwarning("No Data", "Generate an array first!")
            return
        self.is_sorting = True
        algo = self.selected_algorithm.get()
        delay = max(1, int(self.speed_scale.get())) / 1000.0

        try:
            if algo == "Bubble Sort":
                self.bubble_sort(delay)
            elif algo == "Insertion Sort":
                self.insertion_sort(delay)
            elif algo == "Selection Sort":
                self.selection_sort(delay)
            elif algo == "Quick Sort":
                self.quick_sort(0, len(self.data)-1, delay)
            elif algo == "Merge Sort":
                self.merge_sort(0, len(self.data)-1, delay)
        finally:
            self.is_sorting = False
            self.draw_data(self.data, ['#55efc4' for _ in range(len(self.data))])

    def stop_sorting(self):
        self.is_sorting = False

    # ------------------- Sorting Algorithms -------------------
    def bubble_sort(self, delay):
        n = len(self.data)
        for i in range(n - 1):
            for j in range(n - i - 1):
                if not self.is_sorting:
                    return
                if self.data[j] > self.data[j + 1]:
                    self.data[j], self.data[j + 1] = self.data[j + 1], self.data[j]
                colors = ['#fdcb6e' if x == j or x == j + 1 else '#00cec9' for x in range(n)]
                self.draw_data(self.data, colors)
                time.sleep(delay)

    def insertion_sort(self, delay):
        n = len(self.data)
        for i in range(1, n):
            if not self.is_sorting:
                return
            key = self.data[i]
            j = i - 1
            while j >= 0 and key < self.data[j]:
                self.data[j + 1] = self.data[j]
                j -= 1
                self.draw_data(self.data, ['#fdcb6e' if x == j or x == i else '#00cec9' for x in range(n)])
                time.sleep(delay)
            self.data[j + 1] = key
            self.draw_data(self.data, ['#00cec9' for _ in range(n)])
            time.sleep(delay)

    def selection_sort(self, delay):
        n = len(self.data)
        for i in range(n):
            if not self.is_sorting:
                return
            min_idx = i
            for j in range(i + 1, n):
                if self.data[j] < self.data[min_idx]:
                    min_idx = j
                self.draw_data(self.data, ['#fdcb6e' if x == j or x == min_idx or x == i else '#00cec9' for x in range(n)])
                time.sleep(delay)
            self.data[i], self.data[min_idx] = self.data[min_idx], self.data[i]
            self.draw_data(self.data, ['#00cec9' for _ in range(n)])
            time.sleep(delay)

    # ---------- Quick Sort ----------
    def quick_sort(self, low, high, delay):
        if not self.is_sorting:
            return
        if low < high:
            pivot_index = self.partition(low, high, delay)
            self.quick_sort(low, pivot_index - 1, delay)
            self.quick_sort(pivot_index + 1, high, delay)

    def partition(self, low, high, delay):
        pivot = self.data[high]
        i = low - 1
        for j in range(low, high):
            if not self.is_sorting:
                return
            if self.data[j] <= pivot:
                i += 1
                self.data[i], self.data[j] = self.data[j], self.data[i]
            colors = ['#fdcb6e' if x == j or x == i or x == high else '#00cec9' for x in range(len(self.data))]
            self.draw_data(self.data, colors)
            time.sleep(delay)
        self.data[i + 1], self.data[high] = self.data[high], self.data[i + 1]
        return i + 1

    # ---------- Merge Sort ----------
    def merge_sort(self, left, right, delay):
        if not self.is_sorting:
            return
        if left < right:
            mid = (left + right) // 2
            self.merge_sort(left, mid, delay)
            self.merge_sort(mid + 1, right, delay)
            self.merge(left, mid, right, delay)

    def merge(self, left, mid, right, delay):
        left_part = self.data[left:mid + 1]
        right_part = self.data[mid + 1:right + 1]
        i = j = 0
        k = left

        while i < len(left_part) and j < len(right_part):
            if not self.is_sorting:
                return
            if left_part[i] <= right_part[j]:
                self.data[k] = left_part[i]
                i += 1
            else:
                self.data[k] = right_part[j]
                j += 1
            k += 1
            colors = ['#fdcb6e' if x == k else '#00cec9' for x in range(len(self.data))]
            self.draw_data(self.data, colors)
            time.sleep(delay)

        while i < len(left_part):
            self.data[k] = left_part[i]
            i += 1
            k += 1
            self.draw_data(self.data, ['#fdcb6e' if x == k else '#00cec9' for x in range(len(self.data))])
            time.sleep(delay)

        while j < len(right_part):
            self.data[k] = right_part[j]
            j += 1
            k += 1
            self.draw_data(self.data, ['#fdcb6e' if x == k else '#00cec9' for x in range(len(self.data))])
            time.sleep(delay)


if __name__ == "__main__":
    root = tk.Tk()
    app = SortingVisualizer(root)
    root.mainloop()
