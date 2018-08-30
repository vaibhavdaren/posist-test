# posist-test
<h1>working of the time function </h1>
<img src= "https://github.com/vaibhavdaren/posist-test/blob/master/posist.PNG">

<h1>working of hash function</h1> 
<img src= "https://github.com/vaibhavdaren/posist-test/blob/master/hashkey.PNG">


<h1>working of authentication of user super-user</h1>
<img src= "https://github.com/vaibhavdaren/posist-test/blob/master/main1.PNG">

<img src= "https://github.com/vaibhavdaren/posist-test/blob/master/main 2.PNG">

as it is clearly visible by code that.
we grant super user privelages to a user and ask the user for loging in after that.
These snips are self explainatory and concered about the core security aspect of the application.
the functions of tree like longest change and child sum property are present in a a seprate file treeproperty.cpp
to make the things simpler.
A moduler apporach is used and we will use the the method of serialisation and deserialisation of tree for storing the application.

Serialing the tree saves the values of the tree in a file and deserialing the tree reads the content from the file and store it in the memory.


<h3>ANSWER algorithm used </h3>
<b>
 1. Root node is the genisis node<br>
<br> 2. list of nodes under vector is the child nodes.
<br> 3. given node id traverse to a given node and iterate the children
<br> 4. to encrypt the data we can use any ciper technique like and change the value of string data suisng 2 functions
     encrypt and decrypt.when data is entered by the user it is stored in encrypted format.if the user id == node owner id the user    
    the encrypt function automatically passes the key. else the key is is asked by application from user.
 <br>5. as explained in 4.
 <br>6. normal edit function of nary tree.
 <br>7. to do this ask for key from orignal owner. on entering the key the user decrypts the data from owner and the owner is chnaged to current user.
<br>8. to find the longest chain calcualte the diameter.
<br>9. 
<br>10. calculate length of chain and change the ownership to one with longer chain .use utility function
  
