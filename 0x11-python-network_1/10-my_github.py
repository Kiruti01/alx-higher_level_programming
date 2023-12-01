#!/usr/bin/python3
"""A script that:
- takes your GitHub credentials (username and password)
- uses the GitHub API to display your id
"""
import sys
import requests
from requests.auth import HTTPBasicAuth

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Usage: python script.py <username> <token>")
        sys.exit(1)

    auth = HTTPBasicAuth(sys.argv[1], sys.argv[2])

    try:
        response = requests.get("https://api.github.com/user", auth=auth)
        response.raise_for_status()  # Raise an exception for 4xx and 5xx status codes
        print(response.json().get("id"))
    except requests.exceptions.RequestException as e:
        print(f"Error: {e}")
        sys.exit(1)
