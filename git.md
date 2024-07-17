Git is a version control system that lets you manage and keep track of your source code history. Here are all the commands you'll need to use Git effectively:

### Setup and Configuration

- **`git config`**: Configure user information for all local repositories
  - `git config --global user.name "Your Name"`
  - `git config --global user.email "youremail@example.com"`

### Getting and Creating Projects

- **`git init`**: Initialize a new Git repository
  - `git init`
- **`git clone`**: Clone an existing repository
  - `git clone https://github.com/user/repo.git`

### Basic Snapshotting

- **`git add`**: Add file contents to the index
  - `git add <filename>`
  - `git add .` (add all files)
- **`git status`**: Show the working tree status
  - `git status`
- **`git diff`**: Show changes between commits, commit and working tree, etc
  - `git diff`
- **`git commit`**: Record changes to the repository
  - `git commit -m "Commit message"`
- **`git reset`**: Reset current HEAD to the specified state
  - `git reset --hard <commit>` (discard all local changes)
  - `git reset <file>` (unstage a file)

### Branching and Merging

- **`git branch`**: List, create, or delete branches
  - `git branch`
  - `git branch <branchname>`
  - `git branch -d <branchname>` (delete branch)
- **`git checkout`**: Switch branches or restore working tree files
  - `git checkout <branchname>`
  - `git checkout -b <newbranch>` (create and switch to new branch)
- **`git merge`**: Join two or more development histories together
  - `git merge <branchname>`

### Sharing and Updating Projects

- **`git remote`**: Manage set of tracked repositories
  - `git remote add origin https://github.com/user/repo.git`
  - `git remote -v` (list all remotes)
- **`git pull`**: Fetch from and integrate with another repository or a local branch
  - `git pull origin <branchname>`
- **`git push`**: Update remote refs along with associated objects
  - `git push origin <branchname>`

### Inspection and Comparison

- **`git log`**: Show commit logs
  - `git log`
- **`git show`**: Show various types of objects
  - `git show <commit>`
- **`git reflog`**: Show the history of the reference logs
  - `git reflog`

### Undoing Changes

- **`git revert`**: Revert some existing commits
  - `git revert <commit>`
- **`git stash`**: Stash the changes in a dirty working directory away
  - `git stash`
  - `git stash pop` (apply stashed changes)

### Advanced Operations

- **`git rebase`**: Reapply commits on top of another base tip
  - `git rebase <branchname>`
- **`git cherry-pick`**: Apply the changes introduced by some existing commits
  - `git cherry-pick <commit>`

### Additional Commands

- **`git rm`**: Remove files from the working tree and from the index
  - `git rm <filename>`
- **`git mv`**: Move or rename a file, a directory, or a symlink
  - `git mv <oldfilename> <newfilename>`
- **`git tag`**: Create, list, delete or verify a tag object signed with GPG
  - `git tag <tagname>`

These commands cover the majority of Git functionality you will need to manage your projects effectively.