# Alternative of SWITCH - CASE dictionary mapping

def switch(day):
    return {
        1: "Monday",
        2: "Tuesday",
        3: "Wednesday"
    }.get(day, "Invalid day")

print(switch(2))