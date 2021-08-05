//                  FMC            FMC            
GPIOB->AFR[0]  &= ~(0xFU<<( 5-0)*4|0xFU<<( 6-0)*4|0);
GPIOB->AFR[0]  |=  (0xCU<<( 5-0)*4|0xCU<<( 6-0)*4|0);
GPIOB->AFR[1]  &= ~(0             |0             |0);
GPIOB->AFR[1]  |=  (0             |0             |0);
GPIOB->MODER   &= ~(0x3U<<( 5*2)  |0x3U<<( 6*2)  |0);
GPIOB->MODER   |=  (0x2U<<( 5*2)  |0x2U<<( 6*2)  |0);
GPIOB->OSPEEDR &= ~(0x3U<<( 5*2)  |0x3U<<( 6*2)  |0);
GPIOB->OSPEEDR |=  (0x2U<<( 5*2)  |0x2U<<( 6*2)  |0);
GPIOB->OTYPER  &= ~(0x1U<<( 5*1)  |0x1U<<( 6*1)  |0);
GPIOB->OTYPER  |=  (0x0U<<( 5*1)  |0x0U<<( 6*1)  |0);
GPIOB->PUPDR   &= ~(0x3U<<( 5*2)  |0x3U<<( 6*2)  |0);
GPIOB->PUPDR   |=  (0x0U<<( 5*2)  |0x0U<<( 6*2)  |0);

//                  FMC            
GPIOC->AFR[0]  &= ~(0xFU<<( 0-0)*4|0);
GPIOC->AFR[0]  |=  (0xCU<<( 0-0)*4|0);
GPIOC->AFR[1]  &= ~(0             |0);
GPIOC->AFR[1]  |=  (0             |0);
GPIOC->MODER   &= ~(0x3U<<( 0*2)  |0);
GPIOC->MODER   |=  (0x2U<<( 0*2)  |0);
GPIOC->OSPEEDR &= ~(0x3U<<( 0*2)  |0);
GPIOC->OSPEEDR |=  (0x2U<<( 0*2)  |0);
GPIOC->OTYPER  &= ~(0x1U<<( 0*1)  |0);
GPIOC->OTYPER  |=  (0x0U<<( 0*1)  |0);
GPIOC->PUPDR   &= ~(0x3U<<( 0*2)  |0);
GPIOC->PUPDR   |=  (0x0U<<( 0*2)  |0);

//                  FMC            FMC            FMC            FMC            FMC            FMC            FMC            
GPIOD->AFR[0]  &= ~(0xFU<<( 0-0)*4|0xFU<<( 1-0)*4|0             |0             |0             |0             |0             |0);
GPIOD->AFR[0]  |=  (0xCU<<( 0-0)*4|0xCU<<( 1-0)*4|0             |0             |0             |0             |0             |0);
GPIOD->AFR[1]  &= ~(0             |0             |0xFU<<( 8-8)*4|0xFU<<( 9-8)*4|0xFU<<(10-8)*4|0xFU<<(14-8)*4|0xFU<<(15-8)*4|0);
GPIOD->AFR[1]  |=  (0             |0             |0xCU<<( 8-8)*4|0xCU<<( 9-8)*4|0xCU<<(10-8)*4|0xCU<<(14-8)*4|0xCU<<(15-8)*4|0);
GPIOD->MODER   &= ~(0x3U<<( 0*2)  |0x3U<<( 1*2)  |0x3U<<( 8*2)  |0x3U<<( 9*2)  |0x3U<<(10*2)  |0x3U<<(14*2)  |0x3U<<(15*2)  |0);
GPIOD->MODER   |=  (0x2U<<( 0*2)  |0x2U<<( 1*2)  |0x2U<<( 8*2)  |0x2U<<( 9*2)  |0x2U<<(10*2)  |0x2U<<(14*2)  |0x2U<<(15*2)  |0);
GPIOD->OSPEEDR &= ~(0x3U<<( 0*2)  |0x3U<<( 1*2)  |0x3U<<( 8*2)  |0x3U<<( 9*2)  |0x3U<<(10*2)  |0x3U<<(14*2)  |0x3U<<(15*2)  |0);
GPIOD->OSPEEDR |=  (0x2U<<( 0*2)  |0x2U<<( 1*2)  |0x2U<<( 8*2)  |0x2U<<( 9*2)  |0x2U<<(10*2)  |0x2U<<(14*2)  |0x2U<<(15*2)  |0);
GPIOD->OTYPER  &= ~(0x1U<<( 0*1)  |0x1U<<( 1*1)  |0x1U<<( 8*1)  |0x1U<<( 9*1)  |0x1U<<(10*1)  |0x1U<<(14*1)  |0x1U<<(15*1)  |0);
GPIOD->OTYPER  |=  (0x0U<<( 0*1)  |0x0U<<( 1*1)  |0x0U<<( 8*1)  |0x0U<<( 9*1)  |0x0U<<(10*1)  |0x0U<<(14*1)  |0x0U<<(15*1)  |0);
GPIOD->PUPDR   &= ~(0x3U<<( 0*2)  |0x3U<<( 1*2)  |0x3U<<( 8*2)  |0x3U<<( 9*2)  |0x3U<<(10*2)  |0x3U<<(14*2)  |0x3U<<(15*2)  |0);
GPIOD->PUPDR   |=  (0x0U<<( 0*2)  |0x0U<<( 1*2)  |0x0U<<( 8*2)  |0x0U<<( 9*2)  |0x0U<<(10*2)  |0x0U<<(14*2)  |0x0U<<(15*2)  |0);

//                  FMC            FMC            FMC            FMC            FMC            FMC            FMC            FMC            FMC            FMC            FMC            
GPIOE->AFR[0]  &= ~(0xFU<<( 0-0)*4|0xFU<<( 1-0)*4|0xFU<<( 7-0)*4|0             |0             |0             |0             |0             |0             |0             |0             |0);
GPIOE->AFR[0]  |=  (0xCU<<( 0-0)*4|0xCU<<( 1-0)*4|0xCU<<( 7-0)*4|0             |0             |0             |0             |0             |0             |0             |0             |0);
GPIOE->AFR[1]  &= ~(0             |0             |0             |0xFU<<( 8-8)*4|0xFU<<( 9-8)*4|0xFU<<(10-8)*4|0xFU<<(11-8)*4|0xFU<<(12-8)*4|0xFU<<(13-8)*4|0xFU<<(14-8)*4|0xFU<<(15-8)*4|0);
GPIOE->AFR[1]  |=  (0             |0             |0             |0xCU<<( 8-8)*4|0xCU<<( 9-8)*4|0xCU<<(10-8)*4|0xCU<<(11-8)*4|0xCU<<(12-8)*4|0xCU<<(13-8)*4|0xCU<<(14-8)*4|0xCU<<(15-8)*4|0);
GPIOE->MODER   &= ~(0x3U<<( 0*2)  |0x3U<<( 1*2)  |0x3U<<( 7*2)  |0x3U<<( 8*2)  |0x3U<<( 9*2)  |0x3U<<(10*2)  |0x3U<<(11*2)  |0x3U<<(12*2)  |0x3U<<(13*2)  |0x3U<<(14*2)  |0x3U<<(15*2)  |0);
GPIOE->MODER   |=  (0x2U<<( 0*2)  |0x2U<<( 1*2)  |0x2U<<( 7*2)  |0x2U<<( 8*2)  |0x2U<<( 9*2)  |0x2U<<(10*2)  |0x2U<<(11*2)  |0x2U<<(12*2)  |0x2U<<(13*2)  |0x2U<<(14*2)  |0x2U<<(15*2)  |0);
GPIOE->OSPEEDR &= ~(0x3U<<( 0*2)  |0x3U<<( 1*2)  |0x3U<<( 7*2)  |0x3U<<( 8*2)  |0x3U<<( 9*2)  |0x3U<<(10*2)  |0x3U<<(11*2)  |0x3U<<(12*2)  |0x3U<<(13*2)  |0x3U<<(14*2)  |0x3U<<(15*2)  |0);
GPIOE->OSPEEDR |=  (0x2U<<( 0*2)  |0x2U<<( 1*2)  |0x2U<<( 7*2)  |0x2U<<( 8*2)  |0x2U<<( 9*2)  |0x2U<<(10*2)  |0x2U<<(11*2)  |0x2U<<(12*2)  |0x2U<<(13*2)  |0x2U<<(14*2)  |0x2U<<(15*2)  |0);
GPIOE->OTYPER  &= ~(0x1U<<( 0*1)  |0x1U<<( 1*1)  |0x1U<<( 7*1)  |0x1U<<( 8*1)  |0x1U<<( 9*1)  |0x1U<<(10*1)  |0x1U<<(11*1)  |0x1U<<(12*1)  |0x1U<<(13*1)  |0x1U<<(14*1)  |0x1U<<(15*1)  |0);
GPIOE->OTYPER  |=  (0x0U<<( 0*1)  |0x0U<<( 1*1)  |0x0U<<( 7*1)  |0x0U<<( 8*1)  |0x0U<<( 9*1)  |0x0U<<(10*1)  |0x0U<<(11*1)  |0x0U<<(12*1)  |0x0U<<(13*1)  |0x0U<<(14*1)  |0x0U<<(15*1)  |0);
GPIOE->PUPDR   &= ~(0x3U<<( 0*2)  |0x3U<<( 1*2)  |0x3U<<( 7*2)  |0x3U<<( 8*2)  |0x3U<<( 9*2)  |0x3U<<(10*2)  |0x3U<<(11*2)  |0x3U<<(12*2)  |0x3U<<(13*2)  |0x3U<<(14*2)  |0x3U<<(15*2)  |0);
GPIOE->PUPDR   |=  (0x0U<<( 0*2)  |0x0U<<( 1*2)  |0x0U<<( 7*2)  |0x0U<<( 8*2)  |0x0U<<( 9*2)  |0x0U<<(10*2)  |0x0U<<(11*2)  |0x0U<<(12*2)  |0x0U<<(13*2)  |0x0U<<(14*2)  |0x0U<<(15*2)  |0);

//                  FMC            FMC            FMC            FMC            FMC            FMC            FMC            FMC            FMC            FMC            FMC            
GPIOF->AFR[0]  &= ~(0xFU<<( 0-0)*4|0xFU<<( 1-0)*4|0xFU<<( 2-0)*4|0xFU<<( 3-0)*4|0xFU<<( 4-0)*4|0xFU<<( 5-0)*4|0             |0             |0             |0             |0             |0);
GPIOF->AFR[0]  |=  (0xCU<<( 0-0)*4|0xCU<<( 1-0)*4|0xCU<<( 2-0)*4|0xCU<<( 3-0)*4|0xCU<<( 4-0)*4|0xCU<<( 5-0)*4|0             |0             |0             |0             |0             |0);
GPIOF->AFR[1]  &= ~(0             |0             |0             |0             |0             |0             |0xFU<<(11-8)*4|0xFU<<(12-8)*4|0xFU<<(13-8)*4|0xFU<<(14-8)*4|0xFU<<(15-8)*4|0);
GPIOF->AFR[1]  |=  (0             |0             |0             |0             |0             |0             |0xCU<<(11-8)*4|0xCU<<(12-8)*4|0xCU<<(13-8)*4|0xCU<<(14-8)*4|0xCU<<(15-8)*4|0);
GPIOF->MODER   &= ~(0x3U<<( 0*2)  |0x3U<<( 1*2)  |0x3U<<( 2*2)  |0x3U<<( 3*2)  |0x3U<<( 4*2)  |0x3U<<( 5*2)  |0x3U<<(11*2)  |0x3U<<(12*2)  |0x3U<<(13*2)  |0x3U<<(14*2)  |0x3U<<(15*2)  |0);
GPIOF->MODER   |=  (0x2U<<( 0*2)  |0x2U<<( 1*2)  |0x2U<<( 2*2)  |0x2U<<( 3*2)  |0x2U<<( 4*2)  |0x2U<<( 5*2)  |0x2U<<(11*2)  |0x2U<<(12*2)  |0x2U<<(13*2)  |0x2U<<(14*2)  |0x2U<<(15*2)  |0);
GPIOF->OSPEEDR &= ~(0x3U<<( 0*2)  |0x3U<<( 1*2)  |0x3U<<( 2*2)  |0x3U<<( 3*2)  |0x3U<<( 4*2)  |0x3U<<( 5*2)  |0x3U<<(11*2)  |0x3U<<(12*2)  |0x3U<<(13*2)  |0x3U<<(14*2)  |0x3U<<(15*2)  |0);
GPIOF->OSPEEDR |=  (0x2U<<( 0*2)  |0x2U<<( 1*2)  |0x2U<<( 2*2)  |0x2U<<( 3*2)  |0x2U<<( 4*2)  |0x2U<<( 5*2)  |0x2U<<(11*2)  |0x2U<<(12*2)  |0x2U<<(13*2)  |0x2U<<(14*2)  |0x2U<<(15*2)  |0);
GPIOF->OTYPER  &= ~(0x1U<<( 0*1)  |0x1U<<( 1*1)  |0x1U<<( 2*1)  |0x1U<<( 3*1)  |0x1U<<( 4*1)  |0x1U<<( 5*1)  |0x1U<<(11*1)  |0x1U<<(12*1)  |0x1U<<(13*1)  |0x1U<<(14*1)  |0x1U<<(15*1)  |0);
GPIOF->OTYPER  |=  (0x0U<<( 0*1)  |0x0U<<( 1*1)  |0x0U<<( 2*1)  |0x0U<<( 3*1)  |0x0U<<( 4*1)  |0x0U<<( 5*1)  |0x0U<<(11*1)  |0x0U<<(12*1)  |0x0U<<(13*1)  |0x0U<<(14*1)  |0x0U<<(15*1)  |0);
GPIOF->PUPDR   &= ~(0x3U<<( 0*2)  |0x3U<<( 1*2)  |0x3U<<( 2*2)  |0x3U<<( 3*2)  |0x3U<<( 4*2)  |0x3U<<( 5*2)  |0x3U<<(11*2)  |0x3U<<(12*2)  |0x3U<<(13*2)  |0x3U<<(14*2)  |0x3U<<(15*2)  |0);
GPIOF->PUPDR   |=  (0x0U<<( 0*2)  |0x0U<<( 1*2)  |0x0U<<( 2*2)  |0x0U<<( 3*2)  |0x0U<<( 4*2)  |0x0U<<( 5*2)  |0x0U<<(11*2)  |0x0U<<(12*2)  |0x0U<<(13*2)  |0x0U<<(14*2)  |0x0U<<(15*2)  |0);

//                  FMC            FMC            FMC            FMC            FMC            FMC            
GPIOG->AFR[0]  &= ~(0xFU<<( 0-0)*4|0xFU<<( 1-0)*4|0xFU<<( 4-0)*4|0xFU<<( 5-0)*4|0             |0             |0);
GPIOG->AFR[0]  |=  (0xCU<<( 0-0)*4|0xCU<<( 1-0)*4|0xCU<<( 4-0)*4|0xCU<<( 5-0)*4|0             |0             |0);
GPIOG->AFR[1]  &= ~(0             |0             |0             |0             |0xFU<<( 8-8)*4|0xFU<<(15-8)*4|0);
GPIOG->AFR[1]  |=  (0             |0             |0             |0             |0xCU<<( 8-8)*4|0xCU<<(15-8)*4|0);
GPIOG->MODER   &= ~(0x3U<<( 0*2)  |0x3U<<( 1*2)  |0x3U<<( 4*2)  |0x3U<<( 5*2)  |0x3U<<( 8*2)  |0x3U<<(15*2)  |0);
GPIOG->MODER   |=  (0x2U<<( 0*2)  |0x2U<<( 1*2)  |0x2U<<( 4*2)  |0x2U<<( 5*2)  |0x2U<<( 8*2)  |0x2U<<(15*2)  |0);
GPIOG->OSPEEDR &= ~(0x3U<<( 0*2)  |0x3U<<( 1*2)  |0x3U<<( 4*2)  |0x3U<<( 5*2)  |0x3U<<( 8*2)  |0x3U<<(15*2)  |0);
GPIOG->OSPEEDR |=  (0x2U<<( 0*2)  |0x2U<<( 1*2)  |0x2U<<( 4*2)  |0x2U<<( 5*2)  |0x2U<<( 8*2)  |0x2U<<(15*2)  |0);
GPIOG->OTYPER  &= ~(0x1U<<( 0*1)  |0x1U<<( 1*1)  |0x1U<<( 4*1)  |0x1U<<( 5*1)  |0x1U<<( 8*1)  |0x1U<<(15*1)  |0);
GPIOG->OTYPER  |=  (0x0U<<( 0*1)  |0x0U<<( 1*1)  |0x0U<<( 4*1)  |0x0U<<( 5*1)  |0x0U<<( 8*1)  |0x0U<<(15*1)  |0);
GPIOG->PUPDR   &= ~(0x3U<<( 0*2)  |0x3U<<( 1*2)  |0x3U<<( 4*2)  |0x3U<<( 5*2)  |0x3U<<( 8*2)  |0x3U<<(15*2)  |0);
GPIOG->PUPDR   |=  (0x0U<<( 0*2)  |0x0U<<( 1*2)  |0x0U<<( 4*2)  |0x0U<<( 5*2)  |0x0U<<( 8*2)  |0x0U<<(15*2)  |0);