from tkinter import *            # This line imports all the classes, functions, and constants from the Tkinter library.

# Create main window
window = Tk()                                 # This line creates the main application window (like the base GUI frame).
window.title("Process Control Window")
window.geometry("300x200")                    # Defines the size of the window.

# Define functions
def start_process():                          # This function will run when the “Start” button is clicked.
    print("Process Started")

def stop_process():                           # This function will run when the “Stop” button is clicked.
    print("Process Stopped")

# Create buttons
start_button = Button(window, text="Start", command=start_process, bg="lightgreen", width=10)
stop_button = Button(window, text="Stop", command=stop_process, bg="lightcoral", width=10)

# Place buttons
start_button.pack(pady=20)
# Places the “Stop” button below the “Start” button.
# pady=10 adds a little vertical spacing.
# Tkinter automatically stacks widgets vertically using pack().

stop_button.pack(pady=10)
# Places the “Stop” button below the “Start” button.
# pady=10 adds a little vertical spacing.
# Tkinter automatically stacks widgets vertically using pack().

# Run the window
window.mainloop()      # --> 'event loop'