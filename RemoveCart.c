RemoveCart()
{
	lr_start_transaction("Remove");
	
		web_reg_find("Text=JPetStore Demo", 
			LAST);
	
		web_reg_find("Text=Your cart is empty.", 
			LAST);
	
		web_url("Remove",
			"URL=https://jpetstore.cfapps.io/cart?remove&itemId={randItem}",
			"TargetFrame=",
			"Resource=0",
			"RecContentType=text/html",
			"Referer=https://jpetstore.cfapps.io/cart",
			"Snapshot=t18.inf",
			"Mode=HTML",
			EXTRARES,
			"URL=/favicon.ico", ENDITEM,
			LAST);
	
		lr_end_transaction("Remove",LR_AUTO);
	
		lr_think_time(3);
	return 0;
}
