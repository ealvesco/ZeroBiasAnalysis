{
int i, j = 0;

auto C0 = new TCanvas();

for(i;i<=100; i++){
	LeftThyVsRightThyAbove0Tracks->SetBinContent(i,51,0);
	}
LeftThyVsRightThyAbove0Tracks->Draw("COLZ");
for(j;j<=100; j++){
	LeftThyVsRightThyAbove0Tracks->SetBinContent(51,j,0);
	}
LeftThyVsRightThyAbove0Tracks->Draw("COLZ");	

C0->SaveAs("LeftThyVsRightThyAbove0Tracks.png");
int k, l = 0;

auto C1 = new TCanvas();

for(k;k<=100; k++){
	LeftThyVsRightThyAbove1Tracks->SetBinContent(k,51,0);
	}
LeftThyVsRightThyAbove1Tracks->Draw("COLZ");
for(l;l<=100; l++){
	LeftThyVsRightThyAbove1Tracks->SetBinContent(51,l,0);
	}
LeftThyVsRightThyAbove1Tracks->Draw("COLZ");	

C1->SaveAs("LeftThyVsRightThyAbove1Tracks.png");

int m, n = 0;

auto C2 = new TCanvas();

for(m;m<=100; m++){
	LeftThyVsRightThyAbove2Tracks->SetBinContent(m,51,0);
	}
LeftThyVsRightThyAbove2Tracks->Draw("COLZ");
for(n;n<=100; n++){
	LeftThyVsRightThyAbove2Tracks->SetBinContent(51,n,0);
	}
LeftThyVsRightThyAbove2Tracks->Draw("COLZ");	

C2->SaveAs("LeftThyVsRightThyAbove2Tracks.png");

int o, p = 0;

auto C3 = new TCanvas();

for(o;o<=100; o++){
	LeftThyVsRightThyAbove3Tracks->SetBinContent(o,51,0);
	}
LeftThyVsRightThyAbove3Tracks->Draw("COLZ");
for(p;p<=100; p++){
	LeftThyVsRightThyAbove3Tracks->SetBinContent(51,p,0);
	}
LeftThyVsRightThyAbove3Tracks->Draw("COLZ");	

C3->SaveAs("LeftThyVsRightThyAbove3Tracks.png");

int q, r = 0;

auto C4 = new TCanvas();

for(q;q<=100; q++){
	LeftThyVsRightThyAbove4Tracks->SetBinContent(q,51,0);
	}
LeftThyVsRightThyAbove4Tracks->Draw("COLZ");
for(r;r<=100; r++){
	LeftThyVsRightThyAbove4Tracks->SetBinContent(51,r,0);
	}
LeftThyVsRightThyAbove4Tracks->Draw("COLZ");	

C4->SaveAs("LeftThyVsRightThyAbove4Tracks.png");

int s, t = 0;

auto C5 = new TCanvas();

for(s;s<=100; s++){
	LeftThyVsRightThy0Tracks->SetBinContent(s,51,0);
	}
LeftThyVsRightThy0Tracks->Draw("COLZ");
for(t;t<=100; t++){
	LeftThyVsRightThy0Tracks->SetBinContent(51,t,0);
	}
LeftThyVsRightThy0Tracks->Draw("COLZ");	

C5->SaveAs("LeftThyVsRightThy0Tracks.png");

}


