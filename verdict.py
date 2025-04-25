# verdict.py
import difflib

def clean_lines(path):
    with open(path, 'r') as f:
        return [line.strip() for line in f.readlines()]

try:
    actual = clean_lines("outputf.in")
    expected = clean_lines("expected.in")

    if actual == expected:
        print("TestCases Passed!✅")
    else:
        print("❌ Output differs:")
        for line in difflib.unified_diff(expected, actual, fromfile='expected', tofile='outputf'):
            print(line)
except FileNotFoundError:
    print("⚠️ One or both files not found (outputf.in / expected.in).")