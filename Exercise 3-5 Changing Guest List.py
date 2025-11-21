# Exercise 3-5: Changing Guest List

guests = ["Albert Einstein", "Nelson Mandela", "Maya Angelou"]

# Guest who can't make it
cant_make_it = "Nelson Mandela"
print(f"{cant_make_it} can't make it to the dinner.")

# Replace with new guest
index = guests.index(cant_make_it)
guests[index] = "Malcolm X"

# Print new invitation messages
for person in guests:
    print(f"Hello {person}, you are invited to dinner with me.")
