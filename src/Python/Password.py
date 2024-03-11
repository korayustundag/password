import random
import string

def generate_password(length, use_uppercase=True, use_digits=True, use_special_chars=True):
    all_chars = string.ascii_lowercase
    if use_uppercase:
        all_chars += string.ascii_uppercase
    if use_digits:
        all_chars += string.digits
    if use_special_chars:
        all_chars += string.punctuation

    password = ''.join(random.choice(all_chars) for _ in range(length))
    return password

def main():
    length = int(input("Enter the password length: "))
    use_uppercase = input("Do you want to use uppercase characters? (y/n): ").lower() == 'y'
    use_digits = input("Do you want to use digits? (y/n): ").lower() == 'y'
    use_special_chars = input("Do you want to use special characters? (y/n): ").lower() == 'y'

    password = generate_password(length, use_uppercase, use_digits, use_special_chars)
    if password:
        print("Generated Password:", password)

if __name__ == "__main__":
    main()
