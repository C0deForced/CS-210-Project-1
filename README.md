Summarize the project and what problem it was solving.
What did you do particularly well?
Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
What skills from this project will be particularly transferable to other projects or course work?
How did you make this program maintainable, readable, and adaptable?


With the grocer application we are looking to provide a quick and direct method to analyze store invtory and help with managing the inventory. By reading a text record we are able to quickly ID and provide a visual or numeric count for the current inventory listed in the store. As well we provide functionality to search for specific items to verify if they are currently in stock. To aid in performance of this application on startup the text file is read then all data results are copied to a backup file to ensure data integrity. By peforming this operation first we can insure that all text records are read correctly and allow for quick access from memory. 

I think some of the key features of this code from a maintenece stand point is that all of the functions are broken down into the key class of Grocer. Here through the H file we are able to quickly define all variables and functions so that in the future as needs of the program chnages can be quickly made and allow for easier documentation as notes can be added directly to the h file and picked up by most IDE's for detailed descriptions. This keeps the main class file cleaner for a reading stand point and 