{
int Counts1 = 0;
int a, b;
for(a=51;a<100;a++){
	for(b=51;b<100;b++){
	int Q1 = LeftThyVsRightThyAbove4Tracks->GetBinContent(a,b);
	Counts1 += Q1;	
	}
}
cout << Counts1 << endl;
int Counts2 = 0;
int c, d;
for(c=0;c<50;c++){
	for(d=51;d<100;d++){
	int Q2 = LeftThyVsRightThyAbove4Tracks->GetBinContent(c,d);
	Counts2 += Q2;	
	}
}
cout << Counts2 << endl;
int Counts3 = 0;
int e, f;
for(e=0;e<50;e++){
	for(f=0;f<50;f++){
	int Q3 = LeftThyVsRightThyAbove4Tracks->GetBinContent(e,f);
	Counts3 += Q3;
	}
}
cout << Counts3 << endl;
int Counts4 = 0;
int g, h;
for(g=51;g<100;g++){
	for(h=0;h<50;h++){
	int Q4 = LeftThyVsRightThyAbove4Tracks->GetBinContent(g,h);
	Counts4 += Q4;
	}
}
cout << Counts4 << endl;
float EventsTotal = Counts2+Counts1+Counts4+Counts3;
float Ratio = ((Counts2-Counts1)+(Counts4-Counts3))/(EventsTotal) ;
cout << "Total = " << EventsTotal << endl;
cout << "Ratio = " << Ratio << endl;
}


