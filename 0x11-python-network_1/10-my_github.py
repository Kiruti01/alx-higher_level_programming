#!/usr/bin/python3
"""A script that:
- takes your GitHub credentials (username and password)
- uses the GitHub API to display your id
"""
import sys
import requests
from requests.auth import HTTPBasicAuth

if __name__ == "__main__":
    auth = HTTPBasicAuth(sys.argv[1], sys.argv[2])

    try:
        r = requests.get("https://api.github.com/user", auth=auth)
        r.raise_for_status()
        print(r.json().get("id"))
    except r.exceptions.RequestException as e:
        print(f"Error: {e}")
        sys.exit(1)
