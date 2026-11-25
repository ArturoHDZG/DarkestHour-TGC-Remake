##############################
# Country definition for U57 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U57
  ai_settings        = { }
  capital            = 1976 # Saltillo
  manpower           = 185
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 30

  diplomacy = {
    relation = { tag = USA value = -100 }
    relation = { tag = MEX value = -200 }
  }

  nationalprovinces      = { 1965 1966 1967 1968 1969 1970 1971 1972 1973 1974 1975 1976 1977 1978 1979 1980 1981 1982 }
  ownedprovinces         = { 1979 1976 1975 1967 1980 }
  controlledprovinces    = { 1979 1976 1975 1967 1980 }

  techapps               = { 1010 1020 1160 3010 3110 5310 5800 6500 6510 8010 8050 13060 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 8
    free_market       = 6
    professional_army = 4
    defense_lobby     = 9
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 1100001 } # Venustiano Carranza 
  headofgovernment       = { type = 9 id = 1100002 } # Venustiano Carranza 
  foreignminister        = { type = 9 id = 1100004 } # Isidro Fabela Alfaro
  armamentminister       = { type = 9 id = 1100013 } # Pastor Rouaix
  ministerofsecurity     = { type = 9 id = 1100016 } # Rafael Zubarán Capmany
  chiefofstaff           = { type = 9 id = 1100020 } # Jacinto Blas Treviño
  chiefofarmy            = { type = 9 id = 1100027 } # Jacinto Blas Treviño
  chiefofnavy            = { type = 9 id = 1100034 } # Jacinto Blas Treviño
  chiefofair             = { type = 9 id = 1100040 } # Alberto Salinas Carranza

  landunit = {
    id       = { type = 24004 id = 1 }
    name     = "Cuerpo del Ejército del Noroeste"
    location = 1980
    division = {
      id             = { type = 24004 id = 2 }
	  name           = "1a. División"
      type           = infantry
      model          = 1
      strength       = 110
      experience     = 20
    }
    division = {
      id             = { type = 24004 id = 3 }
	  name           = "2a. División"
      type           = infantry
      model          = 1
      strength       = 110
      experience     = 20
    }
    division = {
      id             = { type = 24004 id = 4 }
	  name           = "3a. División"
      type           = infantry
      model          = 2
      strength       = 110
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 24004 id = 5 }
    name     = "Cuerpo del Ejército del Noreste"
    location = 1976
    division = {
      id             = { type = 24004 id = 6 }
	  name           = "1a. División"
      type           = infantry
      model          = 1
      strength       = 110
      experience     = 20
    }
  }
}
