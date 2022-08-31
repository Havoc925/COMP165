import os
from os.path import exists

mainFile = open("..\\main.cpp", "r")

lines = mainFile.read()
firstLine = lines.split('\n', 1)[0].removeprefix("//")

chapter = firstLine.split(".")[0]
assnNum = firstLine.split(".")[1]
questionNum = firstLine.split(".")[2]

current_directory = os.getcwd()
final_directory = os.path.join(current_directory, ("Chapter " + chapter))

fileName = chapter + "." + assnNum + "." + questionNum + ".cpp"

if not exists(os.path.join(final_directory, fileName)):
    file = open(os.path.join(final_directory, fileName), "w")
    file.write(lines)
    file.close()
    mainFile.close()
    print("Target file created.\n File moved to archive")

else:
    targetFile = open(os.path.join(final_directory, fileName), "r+")
    targetFileContent = targetFile.read()
    if targetFileContent == lines:
        print("Target file already exists and is up to date")
    else:
        targetFile.write(lines)
        targetFile.close()
        mainFile.close()
        print("Target file overwritten to latest version")