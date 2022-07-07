git_commit() {
	git add .
	git commit -m "$*"
	git push
}

alias mc = git_commit
