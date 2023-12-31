Problem Analysis:
The problem is to calculate the time taken to send a file based on the file size and the transmission speed.
The time taken needs to be converted from seconds to days, hours, minutes, and seconds for better understanding.

Algorithm Design:
1. Start step
2. Declare and initialize the variables:
   - transmission_speed: the speed of transmission in characters per second
   - file_size: the size of the file in bytes
   - time_taken: to store the time taken to send the file
3. Calculate the time taken to send the file:
   - time_taken = file_size / transmission_speed (in seconds)
4. Convert the time taken from seconds to days, hours, minutes, and seconds:
   - days = time_taken / (24 * 3600) // convert seconds to days
   - hours = fmod(time_taken, (24 * 3600)) / 3600 // convert remaining seconds to hours
   - minutes = fmod(time_taken, 3600) / 60 // convert remaining seconds to minutes
   - seconds = fmod(time_taken, 60) // remaining seconds
5. Output the time taken to send the file in the format: "days, hours, minutes, seconds"
6. stop
 
 
 
 
 ![283976365-34bab0be-e1d9-468a-8b59-ace942c7c4b2](https://github.com/SWEG-2015EC-Batch/Code-Warrior/assets/149199747/0ac20dc7-3a62-4b08-93dc-bda9905d05ac)

