vuser_init()
{
	web_set_sockets_option("SSL_VERSION", "TLS1.2");
                      
	lr_start_transaction("Accueil");

	web_reg_find("Text=JPetStore Demo", 
		LAST);

	web_url("catalog", 
		"URL=https://jpetstore.cfapps.io/catalog", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("Accueil", LR_AUTO);

	lr_think_time(3);
	return 0;
}
