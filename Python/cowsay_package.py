import cowsay
import sys

if len(sys.argv) == 2:               # IF ARGUMENTSB ARE EQUAL TO 2.
    cowsay.cow("HELLO " + sys.argv[1])        # ALSO KNOWN AS ASCII ART.
    cowsay.trex("WELCOME " + sys.argv[1])