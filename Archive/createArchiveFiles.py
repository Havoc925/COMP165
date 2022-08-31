import os
from os.path import exists
while True:
    chapter = input("Enter the chapter number: ")
    if chapter == "exit":
        break
    start = input("Enter the first assignment number: ")
    end = input("Enter the last assignment number: ")

    current_directory = os.getcwd()
    final_directory = os.path.join(current_directory, ("Chapter " + chapter))
    if not os.path.exists(final_directory):
        os.makedirs(final_directory)

    for i in range(int(start), int(end) + 1):
        filename = chapter + "." + str(i) + ".1" + ".cpp"
        if not exists(os.path.join(final_directory, filename)):
            file = open(os.path.join(final_directory, filename), "w")
            file.close()
        else:
            print("File " + filename + " already exists\n")