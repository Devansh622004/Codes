from main import get_weather

def test_get_weather():
    assert get_weather(21) == "COLD"              # "assert" KEYWORD TELLS US WEATHER SOMETHING IS TRUE/FALSE.