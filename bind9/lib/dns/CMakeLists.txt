project(bind9-dns)

set(dns_sources
	acache.c
	acl.c
	adb.c
	byaddr.c
	cache.c
	callbacks.c
	clientinfo.c
	compress.c
	db.c
	dbiterator.c
	dbtable.c
	diff.c
	dispatch.c
	dlz.c
	dns64.c
	dnssec.c
	ds.c
	dst_api.c
	dst_lib.c
	dst_parse.c
	dst_result.c
	forward.c
	gssapi_link.c
	gssapictx.c
	hmac_link.c
	iptable.c
	journal.c
	key.c
	keydata.c
	keytable.c
	lib.c
	log.c
	lookup.c
	master.c
	masterdump.c
	message.c
	name.c
	ncache.c
	nsec.c
	nsec3.c
	order.c
	peer.c
	portlist.c
	private.c
	rbt.c
	rbtdb.c
	rbtdb64.c
	rcode.c
	rdata.c
	rdatalist.c
	rdataset.c
	rdatasetiter.c
	rdataslab.c
	request.c
	resolver.c
	result.c
	rootns.c
	rpz.c
	rriterator.c
	sdb.c
	sdlz.c
	soa.c
	spnego.c
	ssu.c
	ssu_external.c
	stats.c
	tcpmsg.c
	time.c
	timer.c
	tkey.c
	tsec.c
	tsig.c
	ttl.c
	update.c
	validator.c
	version.c
	view.c
	xfrin.c
	zone.c
	zonekey.c
	zt.c
)

add_darling_object_library(bind9-dns ${dns_sources})

