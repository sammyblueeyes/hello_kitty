#define HTML_HEADER " \
<!DOCTYPE html><html><head><title>CaptivePortal</title></head><body> \
<div style='text-align:center;'> \
<div style='display:inline-block;'> \
<h1 style='font-family:arial'>Hello Kitty!</h1> \
<p style = 'font-family:courier,monospace;font-size:12px;text-align:left;'>"

#define HTML_FOOTER "</p> </div> </div> </body></html>"


#define HTML_KITTY1 " \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;.ZMMMMMN.&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;..:+=.<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;,NMNZ~..&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;.MMZZZZZMM,.ZMMMMMMMM?.<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;.+MM+=ZMMMMN......,++I7MMZZZZZZZMMMM~......+M~<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;~M8.......~MMMMMMMMMMMMMZZZZZZZZZM8.........MM<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;MM...................~MZZZZZMMMMZMM8,.......MM.<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;.MM...................NMZZZZZMZZMM8ZZMMMNMMMMMM.<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;.MN...................M8ZZZZZMMMMZZZZZZMMZZZZZMM,<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;.MM...................IMZZZZZZZMZZZZZZZMMZZZZZZMM<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;MMMM..................NMM8Z8MMM8ZZZZZZMMMMZZZZMM..<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;,MM.....................+ZZ?,.?M8ZZZ8MMZMMZZZZMZ,,<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;.MM..............................+MMMMZZ8ZZZZZMN.MMZ+~,<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;+M7.................................~MZZZZZZMMMM.MMMMMM8I~,<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;.MN...................................:MMMMMMN.,MIMMMMMMMMMN<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;?M~.............................................MMMMMMMMMMMM<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;NM..............................................MM.?ZMMMMMMM<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;MM...........................................~NMMMMMMMMN8MMM<br/> \
..:+IMMZI:........................................?I=MM,......~78<br/> \
NN+,:MM,........~MMN.....................MMM+........MM<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;,MI........ZMMM.....................MMMZ.......,MM<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;.MM:,,......MN..........ZDZ:........+MZ........7MMMMMM<br/> \
&nbsp;&nbsp;+MMMMM,..................MIIIM+..................MM<br/> \
&nbsp;&nbsp;..&nbsp;&nbsp;IMZ..................8MDMM................ZIMM,<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;,MMMM=...................................,MMMMN<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;.IMMMMM...................................~MM,..7MM,<br/> \
&nbsp;&nbsp;&nbsp;.NM?.&nbsp;&nbsp;,NMM7..............................ZMM+<br/> \
&nbsp;&nbsp;&nbsp;...&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;.,MMMMNI.....................IMMMM,<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;.:NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM,<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;.NMM+ZZZMMZZZMM~~,,,,++??,M8ZZZMMZZ~7MMN,<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;.MMM.ZZ$,MMZZZZZM7~,,,,,,,,MMZZZZZMM.ZZ+.MMN<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;~MM+MM~.ZMMZZZZZZZMMD:,,,~MM8ZZZZZZZMM+.ZMM+MM<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;,M8...:MMMMZZMMMMZZZZZ8MMM8ZZZZZMMM8ZZMMMM:...8M~<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;,MZ......+MZZ8+..~MZZZZZZZZZZZZZM~..M8ZZM7......MM<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;+M.......MMZZZM~,M8ZZZZZZZZZZZZZMM.~MZZZMM......?M<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;,M~.....ZMZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ8M......MM<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;.NM~....MMZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZMI....+MM<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;8MMMMMMMZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZMMMMMMM,<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;...:M8ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ8M+,,<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;.M8ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ8M:M8<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;,M8ZZZZZZZZZZZZZZZMZZZZZZZZZZZZZZZZM,MN<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;.MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM:M7<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;,MI..............7M...............+M:N,<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;.MD..............7M...............ZM.+<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;MM..............?M,.............,MZ.<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;,MM.............MM7.............MM.,<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;.NMMMMD?7IIZNMMM7MMMNZII7ZZMMMM7.+<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;..IZMNMMZ7,.....+7NMMMMZ+..MM8,<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;..?MMMN+<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;.:NMMM8<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;..IMMMM+<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;..ZMMMM~<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;.,NMMMD.<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;..ZMMMM~&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;-Brandon&nbsp;Adamson<br/> \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;.,NMMMD<br/> \
"
