$echo $HOME                             // home directory
$pwd                                   // present workin directory

$cd dirname                             // change directory
$cd ..                                   // going back to dir

$mkdir adir                             // make a directory
$mkdir adir/adir2 adir/adir3            //making 2 dir at a time inside adir

$rmdir adir                              //remove directory
$rmdir adir/adir2 adir/adir3            //remove directories inside adir

$file afile/*                           //know the file type
$ls afile                             //listing files

$ls -l                                    // long listing showing seven attributes at a time
$ls -t                                   // sorted showing 
$ls -lt
$ls -lu
$ls -i 

$touch file1 file2                          // create two empty files
$cat >file3                                 //create ordinary file use ##ctrl+d to close

$cp ch dir/file                                 //copy ch(file) into dir->file(file)

$rm file                                      // remove file

$mv afile bfile                               //rename afile as bfile

$wc file3                                       //for wordcount ..it returns 3 attributes

$cmp afile bfile                          // compare afile & bfile
$diff afile bfile                           // difference between file
$comm afile bfile                                 // common between afile bfile
