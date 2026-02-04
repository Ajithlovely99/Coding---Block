# Coding---Block
This is problem solved codes.
<br>
Author - Ajith Kumar Singh (Student)

Checking Modified Files:

Unstaged Changes: Files that are modified but not staged for commit can be checked using:

git status


This will show:

Modified files

Untracked files

Staging and Unstaging Changes:

Stage a file for commit:

git add <filename>


Unstage a file (i.e., remove it from staging):

git restore --staged <filename>

Checking Staged Changes:

To see the files that are staged for commit:

git diff --cached

Checking the Full Status of All Files:

To check the status of all files, both modified and unmodified (including staged and unstaged), you can use:

git status

3. Using Git Forwarder or Git Push

If by "word forwarder" you mean forwarding or pushing changes, you can push your changes to a remote repository:

Commit Changes: First, commit your changes (if you haven’t already):

git commit -m "Your commit message"


Push to Remote:

git push origin <branch_name>

4. Example Workflow in VS Code + Git Bash

Here’s a typical workflow you might follow:

Modify a File: Change a file in your project.

Check Modified Files:

git status


This will show you the modified files.

Stage the Changes:

git add .


Commit the Changes:

git commit -m "Updated the file"


Push the Changes:

git push origin main