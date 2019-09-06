#define WIFI_SSD "ssid-goes-here"
#define WIFI_PASS "wifi-pass-goes-here"
#define LND_HOST "192.168.1.1"

//SSL must be in this format, SSL for the node can be exported from yournode.com:8077 in firefox
#define LND_CERT "-----BEGIN CERTIFICATE-----\n" \
    "LJR73JFORVegAwIBAgIRAMm6USxwBJA4nJvEwFFYIxIwCgYIKoZIzj0EAwIwNTEf\n" \
    "b2x0MB4XDTE5MDEwNDIxNDIyNloXDTIwMDIyOTIxNDIyNlowNTEfCMPSH1UEChMW\n" \
    "bG5kIGF1dG9nZW5lcmF0ZWQgY2VydDESMBAGA1UEAxMJcmFzcGlib2x0MFkwEwYH\n" \
    "KoZIzj0CAQYIKoZIzj0DAQcDQgAE1FEuY32S5O0QxfMrDaza2E7ETaswtUEW+cBU\n" \
    "aJ4fwTrnSM/o3Yx6OHn4zX5jhUeo+B2x2p2/Tq6KvNMThdAOL6OBhzCBhDAOBgNV\n" \
    "HQ8BAf8EBAMCAqQwDwYDVR0TAQH/BAUwAwEB/zBhBgNVHREEWjBYgglyYXNwaWJv\n" \
    "bHSCCWxvY2FsaG9zdIIEdW5peIIKdW5peHBhY2tldIcEfwAAAYcQAAAAAAAAAAAA\n" \
    "AAAAAAAAAYcEwKgCuIcQ/oAAAAAAAABN5T9iuQkQojAKBggqhkjOPQQDAgNIADBF\n" \
    "AiA/OaJUE89MKKsYIy8UC3WTSo+lKge9tZiRTe35miJ/QwIhALdkyTW6R9sDGgwn\n" \
    "OrHUJtCSx836xs+avVa6pVizDOKV\n" \
    "-----END CERTIFICATE-----\n"

#define LND_MACAROON_READONLY "contents of: base64 readonly.macaroon"


#define LND_MACAROON_INVOICE "contents of: base64 invoice.macaroon"
