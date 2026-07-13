
#                 LINUX CMDS
# list 
ls    -> for list of files/dir 
ls -l -> long list of files
la -a -> include all hidden files

# WORD count
wc -c path/dir/file 

# piping [ join two or more cmds ]
echo "str" | wc -w (-w -> to count only word)

# variable and storing value
var="value"

# print any var
echo $var -> print value stored in var

# to print any str
echo "string" 

# terminal 
Terminal -> program that accepts text based cmds can render text in screen

# to perform calc on terminal
expr (like sum/sub/multiply/div)

# to know current user
whoami 

# to know past cmd used
history 

# to clean screen (ctrl + L)
clear 

# to know current working dir
pwd

# change dir  
cd 

# paths 
absolute -> (/user/fullpath) relative -> dir/file

# Print the contents of a file to the terminal
cat file1.txt

# Concatenate the contents of multiple files and print them to the terminal
cat file1.txt file2.txt

# print first n num of line from file
head -n num file1.txt

# print last n num of line from file
tail -n num file1.txt

# to view content of file 1page at a time
less 

# to create new file/s (modify if exist) 
touch some_file.txt some_other_file.txt

# to create new dir
mkdir my_directory

# file renaming
mv some_file.txt some_other_name.txt

# file moving to other path
mv some_file.txt dir/paths/some_file.txt

# to remove a single fike
rm some_file.txt

# to remove file recursively 
rm -r some_directory

# copy file 
cp source_file.txt destination/

# copy files recursively in a dir
cp -R my_dir new_dir

# to search word string in a file
grep "string" file1 file2 for multiple files
grep -r 'str' .

# search by file name
find some_directory -name file.txt

# Find all filenames that contain the word "chad"
find some_directory -name "*chad*"

# manual page and options
man cmd 

# too long didnt read -> to summarize any cmd
tldr cmd 

# to run mutiple cmds on single line
command1 ; command2

# if you only want the second command to run when the first command succeeds
command1 && command2
