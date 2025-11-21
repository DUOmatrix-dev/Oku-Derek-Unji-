# Exercise 3-6: More Guests

guests = ["Albert Einstein", "Nelson Mandela", "Maya Angelou"]

print("Good news! I found a bigger dinner table.")

# Add one guest to the beginning
guests.insert(0, "Leonardo da Vinci")

# Add one guest to the middle
middle_index = len(guests) // 2
guests.insert(middle_index, "Socrates")

# Add one guest to the end
guests.append("Cleopatra")

# Print new set of invitation messages
for person in guests:
    print(f"Hello {person}, you are invited to dinner with me.")
