function startTime() {
	const now = new Date(); //new Date object
	let h = now.getUTCHours();
	let name;
	switch(h){
		case 12:
			name="ZULU";
			break;
		case 11:
			name="ALPHA";
			break;
		case 10:
			name="BRAVO";
			break;
		case 9:
			name="CHARLIE";
			break;
		case 8:
			name="DELTA";
			break;
		case 7:
			name="ECHO";
			break;
		case 6:
			name="FOXTROT";
			break;
		case 5:
			name="GOLF";
			break;
		case 4:
			name="HOTEL";
			break;
		/* INDIA is skipped */
		case 3:
			name="JULIET";
			break;
		case 2:
			name="KILO";
			break;
		case 1:
			name="LIMA";
			break;
		case 0:
			name="MIKE";
			break;
		case 23:
			name="X-RAY";
			break;
		case 22:
			name="WHISKEY";
			break;
		case 21:
			name="VICTOR";
			break;
		case 20:
			name="UNIFORM";
			break;
		case 19:
			name="TANGO";
			break;
		case 18:
			name="SIERRA";
			break;
		case 17:
			name="ROMEO";
			break;
		case 16:
			name="QUEBEC";
			break;
		case 15:
			name="PAPA";
			break;
		case 14:
			name="OSCAR";
			break;
		case 13:
			name="NOVEMBER";
			break;
		/*YANKEE is the same as MIKE but offset by 24h.*/
		}

	let m = now.getUTCMinutes();
	let s = now.getUTCSeconds();
	m = checkTime(m);
	s = checkTime(s);
	document.getElementById('txt').innerHTML =  name + ":" + m + ":" + s;
	setTimeout(startTime, 1000); //keeps the clock actively ticking
}

function checkTime(i) {
	if (i < 10) {i = "0" + i};  // add leading zeroes
	return i;
}

