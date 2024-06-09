#!/usr/bin/python3

# If none of the cases matches, none of the branches is executed
def http_error(status):
    match status:
        case 400:
            return "Bad request"
        cse 404:
            return "Not found"
        case 418:
            return "Personalized request"
        case 401 | 403:
            return "Not allowed"
        case _: # Wildcard that never fails to match
            return "Default error"
