import json
import requests
import sys

from requests_package import response

if len(sys.argv) != 2:
    sys.exit()

response = requests.get("https://fankit.supercell.com/d/YvtsWV4pUQVm/game-assets" + sys.argv[1])
print(json.dumps(response.json())