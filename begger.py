# Simple Facebook-like profile simulator

users = {}

def create_profile():
    name = input("Enter your name: ")
    age = input("Enter your age: ")
    bio = input("Write a short bio: ")

    users[name] = {"age": age, "bio": bio}
    print(f"Profile created for {name}!\n")

def view_profiles():
    if not users:
        print("No profiles to show.\n")
        return
    for name, info in users.items():
        print(f"Name: {name}\nAge: {info['age']}\nBio: {info['bio']}\n")

while True:
    print("1. Create Profile\n2. View Profiles\n3. Exit")
    choice = input("Choose an option: ")

    if choice == '1':
        create_profile()
    elif choice == '2':
        view_profiles()
    elif choice == '3':
        print("Goodbye!")
        break
    else:
        print("Invalid choice.\n")