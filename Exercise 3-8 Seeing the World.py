# Exercise 3-8: Seeing the World

# List of places (not in alphabetical order)
places = ["Tokyo", "Cape Town", "Reykjavik", "Sydney", "Cairo"]

# Original list
print("Original list:")
print(places)

# Alphabetical order using sorted()
print("\nAlphabetical order (sorted):")
print(sorted(places))

# Show original list still unchanged
print("\nOriginal list still unchanged:")
print(places)

# Reverse alphabetical using sorted()
print("\nReverse alphabetical order (sorted with reverse=True):")
print(sorted(places, reverse=True))

# Show original list still unchanged again
print("\nOriginal list still unchanged again:")
print(places)

# Use reverse() to change order of the list
places.reverse()
print("\nList after reverse():")
print(places)

# Reverse again to restore original order
places.reverse()
print("\nList after second reverse() (restored original order):")
print(places)

# Use sort() to store list in alphabetical order
places.sort()
print("\nList after sort() alphabetical:")
print(places)

# Use sort() with reverse=True for reverse alphabetical
places.sort(reverse=True)
print("\nList after sort() reverse alphabetical:")
print(places)
