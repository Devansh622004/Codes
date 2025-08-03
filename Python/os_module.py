# THIS PROGRAM CREATES MULTIPLE FILES AT A TIME.

import os

if (not os.path.exists("Data")):  # IT CREATES A DIRECTORY( FOLDER ) IF NOT CREATED.
    os.mkdir("Data")

for i in range(0, 100):           # IT CREATES 100 DIRECTORIES INSIDE DIRECTORY "Data".
    os.mkdir(f"data/Day{i + 1}")

