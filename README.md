<!DOCTYPE html>
<H1> How to use </H1>
<p>
  for the program to respond to clicks all you have to do is run it and it'll instantly start listening for clicks.
</p>
<h3>
  How to Configure the program
</h3>
<p>
  take a look in Test.txt and you'll see 3 key lines:<br>
  line 1 (int) = ms - how long each burst is<br>
  line 2 (int) = ms1 - delay between shots<br>
  line 3 (bool) = ch - 1 to hold, 0 to click repeatedly<br>
</p>
<p>
  In case you didnt absorb that information above instantly here's what each line means in detail: <br>
  line 1 is how long in ms the burst loop will run. 1000 ms means it'll burst for 1 second.<br>
  line 2 is the delay between clicks so when using a pistol you can set it to around 30ms and it'll wait that long between bursts<br>
  line 3 is the choice between option 1 which is holding mouse click (good for auto weapons) and option 2 which is rapidly clicking (good for pistols).
</p>
<h4> It is vital that the first 3 lines of text are integers only or else the program will break and destroy your computer (jk)</h4>
