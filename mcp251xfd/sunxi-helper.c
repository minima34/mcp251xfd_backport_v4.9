#include "../../../../spi/my-spi-sunxi.c"

int	calc_gpio(char port, int num)
{
	int	port_num;
	
	switch(port){
	case 'a':
	case 'A':
		port_num = num;
		break;
	case 'b':
	case 'B':
		port_num = 32 + num;
		break;
	case 'c':
	case 'C':
		port_num = 64 + num;
		break;
	case 'd':
	case 'D':
		port_num = 96 + num;
		break;
	case 'e':
	case 'E':
		port_num = 128 + num;
		break;
	case 'f':
	case 'F':
		port_num = 160 + num;
		break;
	case 'g':
	case 'G':
		port_num = 192 + num;
		break;
	case 'h':
	case 'H':
		port_num = 224 + num;
		break;
	case 'i':
	case 'I':
		port_num = 256 + num;
		break;
	case 'j':
	case 'J':
		port_num = 288 + num;
		break;
	case 'K':
	case 'k':
		port_num = 320 + num;
		break;
	case 'l':
	case 'L':
		port_num = 352 + num;
		break;
	case 'm':
	case 'M':
		port_num = 384 + num;
		break;
	case 'n':
	case 'N':
		port_num = 416 + num;
		break;
	default:
		port_num = 0;
	}
	return port_num;
}

static void
tid_cs_start(struct spi_device *spi)
{
	//int cs_pinn = calc_gpio('B', 0);
	struct sunxi_spi *sspi = spi_master_get_devdata(spi->master);
	set_cs_level(sspi->base_addr, 0);
	//gpio_set_value(cs_pinn, 0);
}

static void
tid_cs_stop(struct spi_device *spi)
{
	//int cs_pinn = calc_gpio('B', 0);
	struct sunxi_spi *sspi = spi_master_get_devdata(spi->master);
	set_cs_level(sspi->base_addr, 1);
	//gpio_set_value(cs_pinn, 1);
}
