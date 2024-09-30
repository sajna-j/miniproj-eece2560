GIT:

don't work off of  `main`- make a new branch 

**Two ways to make a new branch off of main**

1. on `github.com`:
    click the "<#> branches" between the current branch & tags button (in this pic it says `2 branches`)
    ![alt text](image-1.png)

    Green button for new branch
    ![alt text](image.png)

    Make the source `main` (or the branch u want ur code to come back to)
    ![alt text](image-2.png)
    

2. in ur terminal
    push up any un-commited/un-pushed changes (check below)

    - start from main `git checkout main`
    - pull any new changes to main `git pull`
    - create a new branch & switch to it `git checkout -b <###new branch name###>`





**After making the branch**
-

**Making commits**

1. through ur terminal & VSCode
    
    - do this while on your branch (run `git branch` to check), it should also say in the bottom left corner of your VSCode window
    
    - check all your changed files in VSCode under the Source Control tab
    ![alt text](image-4.png)

    - Stage what files you want others to see by hitting the `+` button & the file(s) should moved to a "Staged Changes" section
    ![alt text](image-5.png)

    - Enter a message to describe your changes & hit commit 
    ![alt text](image-6.png)

    - PUSH! (This will make your changes visible on the GitHub website- still only on your branch) two options:

        1. hover over the top right corner of the Source Control Graph section & hit the button arrows upwards (Push)
        ![alt text](image-7.png)

        OR

        2. in a terminal from the `miniproj-eece2560` directory, run `git push`



1. turn your branch into a Draft PR so that you can see your commit history 

    Click `contribute`
    ![alt text](image-3.png)
