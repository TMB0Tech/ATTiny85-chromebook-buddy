Hello Mark!
<h1> ATTiny85-chromebook-buddy</h1>
<body>
Howdy! This is the repository for the AISD-techs that allows them to update the chromebook buddies. In this repository are the files needed to run the powerwasher buddy and the tester buddy. Below are instructions on how to obtain, download, compile, use, and add code to the chromebook buddies.
</body>

<h3>Table Of Content</h3>
<ol>
         <li><a href="#hardware">Hardware Needed</a></li>
         <li><a href="#download">Software Needed</a></li>
         <li><a href="#setup">Setting Up the IDE</a></li>
         <li><a href="#compile">Compiling</a></li>
         <li><a href="#use">How To Use</a></li>
         <li><a href="#coding">Adding Code To Your Buddy</a></li>
</ol>
<div id="hardware">
         <h2>Hardware Needed</h2>
         <body>
                  <ul>
                           <li>A computer that runs Ether MacOS, Ubuntu, Windows8.1, with one free and functional USB 2.0 port</li>
                           <li>A ATTiny85 with usb plug, can be found <a href="https://www.amazon.com/s?k=attiny85+usb&ref=nb_sb_noss_2" target="_blank" rel="noreferrer noopener">here</a> (You j8 ttrshould probably open this as a new tab)</li>
                  </ul>
         </body>
                           
</div>
<div id="download">
         <h2>Software Needed</h2>
         <ul>
                  <li><a href="https://www.arduino.cc/en/software">Arduino IDE</a></li>
                  <li><a href="https://github.com/digistump/DigistumpArduino/releases/download/1.6.7/Digistump.Drivers.zip">Digistump Drivers</a></li>
                  <li>A zip archive of this repository</li>
         </ul>
</div>
<div id="setup">
         <h2>Setting Up The IDE</h2>
         After opening the Arduino IDE, you should do these steps to setup the compilier and library.
         <ol>
                  <li>Goto preferences: File -> Preferences</li>
                  <li>At the Addional Boards Manager URL section, click the dialog icon button to the right of the text box</li>
                  <li>Copy and paste this into the dialog box: http://digistump.com/package_digistump_index.json</li>
                  <li>Press OK</li>
                  <li>Exit the preferences window</li>
                  <li>Goto the Board Manager: Tools -> Board -> Board Manager</li>
                  <li>In the top search bar type: Digistump AVR</li>
                  <li>In the Digistump AVR Boards Box, press install</li>
                  <li>Exit the window</li>
                  <li>Select the board: Tools -> Board: -> Digispark(Default - 16.5)</li>
                  <li>Extract the zip archive of this repository somewhare</li>
                  <li>In the Arduino IDE, File -> Open -> [Select both of the files from  the extracted archive]</li>
         </ol>
</div>
<div id="compile">
         <h2>How To Compile And Upload The Code To Your Buddy</h2>
</div>
<div id="use">
         <h2>How To Use A Test Buddy</h2>
</div>
<div id="coding">
         <h2>Adding Code To Your Buddy</h2>
</div>
         
                  
                  
