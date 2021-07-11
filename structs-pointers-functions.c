#include <stdio.h>

struct refCurrency
{
  char *fiatRef;
  char *cryptoRef;
};
  
typedef struct crypto
{
  const char *name;
  const char *ticker;
  float price;
  double marketcap;

  struct refCurrency priceRef;
} crypto;

void getCryptoInfo(struct crypto theCrypto);
void getMemoryLocations(struct crypto theCrypto);
void getCryptosRefCurr(crypto theCrypto);
void setCryptoPrice(crypto theCrypto, int newPrice);
void setCryptoPricePtr(crypto *theCrypto, int newPrice);

int main()
{

  struct crypto cardano = {
    "Cardano",
    "ADA",
    1.35,
    42875768336,
    {"USD", "BTC"}
  };

  getCryptoInfo(cardano);

  printf("Play with memory? 1) No 2) Yes ");
  int memPlay = 1;
  scanf(" %d", &memPlay);
  if (memPlay == 2)
  {
    struct crypto cardano2 = cardano;

    printf("cardano\n");
    getMemoryLocations(cardano);

    printf("\n-------------------\n\n");

    printf("cardano2\n");
    getMemoryLocations(cardano2);

    printf("\n-------------------\n\n");
  }
  
  crypto bitcoin = {
    "Bitcoin",
    "BTC",
    33874.06,
    634275965595,
    {"USD", "BTC"}
  };

  getCryptoInfo(cardano);
  
  getCryptosRefCurr(bitcoin);

  setCryptoPrice(bitcoin, 33900);

  printf("The Price in Main() %f%s\n\n",
	 bitcoin.price,
	 bitcoin.priceRef.fiatRef);

  printf("Pointer function\n");
  setCryptoPricePtr(&bitcoin, 33900);

  printf("The Price in Main() After Pointer function %f%s\n\n",
	 bitcoin.price,
	 bitcoin.priceRef.fiatRef);
  
  return 0;
}

void getCryptoInfo(struct crypto theCrypto)
{
  printf("\n");

  printf("Name: %s\n\n", theCrypto.name);
  printf("Ticker: %s\n\n", theCrypto.ticker);
  printf("1) Fiat reference\n2) Crypto reference\n");
  int ref = 0;
  scanf(" %d", &ref);
  if (ref == 1)
  {
    printf("Price: %f %s\n\n",
	   theCrypto.price,
	   theCrypto.priceRef.fiatRef);
  }
  else if (ref == 2)
  {
    float cryptoRef = 33900;
    printf("Cryptocurrency's reference price (in USD): ");
    scanf(" %f", &cryptoRef);
    printf("Price: 1%s = %f %s\n\n",
	   theCrypto.ticker,
	   theCrypto.price / cryptoRef,
	   theCrypto.priceRef.cryptoRef);
  }
  else printf("ERROR!\n");
  printf("Market Cap: %f\n", theCrypto.marketcap);
  printf("Number of coins: %f\n", theCrypto.marketcap / theCrypto.price);
  
}

void getMemoryLocations(struct crypto theCrypto)
{
  printf("Name Location: %p\n\n", theCrypto.name);
  printf("Ticker Location: %p\n\n", theCrypto.ticker);
  printf("Price Location: %p\n\n", &theCrypto.price);
}


void getCryptosRefCurr(crypto theCrypto)
{
  printf("\n");

  float cryptoRef = 33874;
  printf("Cryptocurrency's reference price (in USD): ");
  scanf(" %f", &cryptoRef);
  printf("%s costs %f%s or %f%s\n\n",
	 theCrypto.name,
	 theCrypto.price,
	 theCrypto.priceRef.fiatRef,
	 theCrypto.price / cryptoRef,
	 theCrypto.priceRef.cryptoRef);
}


void setCryptoPrice(crypto theCrypto, int newPrice)
{
  theCrypto.price = newPrice;

  printf("The price was changed to %f%s\n\n",
	 theCrypto.price,
	 theCrypto.priceRef.fiatRef);
}

void setCryptoPricePtr(crypto *theCrypto, int newPrice)
{
  printf("Pointer's notations: (*theCrypto).price\n");
  (*theCrypto).price = newPrice;

  printf("The  was changed to %f%s\n\n",
	 (*theCrypto).price,
	 (*theCrypto).priceRef.fiatRef);

  printf("Arrow's notations: theCrypto->Price\n");
  theCrypto->price = newPrice;

  printf("The  was changed to %f%s\n\n",
	 theCrypto->price,
	 theCrypto->priceRef.fiatRef);
}

