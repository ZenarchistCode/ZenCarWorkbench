@echo off

SET /P giturl="Git URL: "

git init
git add .
git commit -m "Source code."
git branch -M main
git remote add origin %giturl%.git
git push -u -f origin main

pause