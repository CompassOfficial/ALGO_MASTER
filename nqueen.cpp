int n=8,diag1[40],diag2[40],ans,col[20];
void Nqueen(int at){
	if(at==n+1){
		ans++;
		return;
	}
	for(int i=1;i<=n;i++){
		if(diag1[i+at]||diag2[n+i-at]||col[i]) continue; 
		diag1[i+at]=diag2[n+i-at]=col[i]=1;
		Nqueen(at+1);
		diag1[i+at]=diag2[n+i-at]=col[i]=0;
	}
}
