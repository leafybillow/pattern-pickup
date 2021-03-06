vector<TString> device_list=
  {"reg_asym_us_avg","reg_asym_us_dd","reg_asym_usl","reg_asym_usr",
   "dit_asym_us_avg","dit_asym_us_dd_div2","dit_asym_usl","dit_asym_usr",
   "asym_us_avg","asym_us_dd","asym_usl","asym_usr",
   "reg_corr_asym_us_avg","reg_corr_asym_us_dd",
   "reg_corr_asym_usl","reg_corr_asym_usr",
   "dit_corr_asym_us_avg","dit_corr_asym_us_dd",
   "dit_corr_asym_usl","dit_corr_asym_usr",
   "reg_asym_ds_avg","reg_asym_ds_dd","reg_asym_dsl","reg_asym_dsr",
   "dit_asym_ds_avg","dit_asym_ds_dd_div2","dit_asym_dsl","dit_asym_dsr",
   "asym_ds_avg","asym_ds_dd","asym_dsl","asym_dsr",
   "reg_corr_asym_ds_avg","reg_corr_asym_ds_dd",
   "reg_corr_asym_dsl","reg_corr_asym_dsr",
   "dit_corr_asym_ds_avg","dit_corr_asym_ds_dd",
   "dit_corr_asym_dsl","dit_corr_asym_dsr",
   "diff_bpm4aX","diff_bpm4eX","diff_bpm4aY","diff_bpm4eY","diff_bpmE",
   "diff_bpm1X","diff_bpm1Y","diff_cav4cX","diff_cav4cY",
   "diff_bpm11X","diff_bpm11Y","diff_bpm12X","diff_bpm12Y",
   "diff_bpm4acX","diff_bpm4ecX","diff_bpm4acY","diff_bpm4ecY",
   "diff_bpm4aX_unrotated","diff_bpm4eX_unrotated",
   "diff_bpm4aY_unrotated","diff_bpm4eY_unrotated",
   "diff_bpm1X_unrotated","diff_bpm1Y_unrotated",
   "diff_bpm11X_unrotated","diff_bpm11Y_unrotated",
   "diff_bpm12X_unrotated","diff_bpm12Y_unrotated",
   "diff_bpm4acX_unrotated","diff_bpm4ecX_unrotated",
   "diff_bpm4acY_unrotated","diff_bpm4ecY_unrotated",
   "asym_bpm4aWS","asym_bpm4eWS",
   "asym_bpm11WS","asym_bpm12WS","asym_bpm1WS",
   "asym_bpm4acWS","asym_bpm4ecWS",
   "asym_bcm_an_us","asym_bcm_an_ds","asym_bcm_dg_us","asym_bcm_dg_ds",
   "asym_bcm_an_new","asym_bcm_an_ds3","asym_cav4cQ",
   "dd_bcm_an_us_bcm_an_ds",
   "avg_bcm_an_us_bcm_an_ds",
   "dd_bcm_an_us_bcm_dg_us",
   "avg_bcm_an_us_bcm_dg_us",
   "dd_bcm_an_us_bcm_dg_ds",
   "avg_bcm_an_us_bcm_dg_ds",
   "dd_bcm_an_us_bcm_an_new",
   "avg_bcm_an_us_bcm_an_new",
   "dd_bcm_an_us_cav4cQ",
   "avg_bcm_an_us_cav4cQ",
   "dd_bcm_an_ds_bcm_dg_us",
   "avg_bcm_an_ds_bcm_dg_us",
   "dd_bcm_an_ds_bcm_dg_ds",
   "avg_bcm_an_ds_bcm_dg_ds",
   "dd_bcm_an_ds_bcm_an_new",
   "avg_bcm_an_ds_bcm_an_new",
   "dd_bcm_an_ds_cav4cQ",
   "avg_bcm_an_ds_cav4cQ",
   "dd_bcm_dg_us_bcm_dg_ds",
   "avg_bcm_dg_us_bcm_dg_ds",
   "dd_bcm_dg_us_bcm_an_new",
   "avg_bcm_dg_us_bcm_an_new",
   "dd_bcm_dg_us_cav4cQ",
   "avg_bcm_dg_us_cav4cQ",
   "dd_bcm_dg_ds_bcm_an_new",
   "avg_bcm_dg_ds_bcm_an_new",
   "dd_bcm_dg_ds_cav4cQ",
   "avg_bcm_dg_ds_cav4cQ",
   "dd_bcm_an_new_cav4cQ",
   "avg_bcm_an_new_cav4cQ",
   "dd_bpm4aX_bpm4eX",
   "dd_bpm4aY_bpm4eY",
   "avg_bpm4aX_bpm4eX",
   "avg_bpm4aY_bpm4eY",
   "dd_bpm4aX_bpm4eX_unrotated",
   "dd_bpm4aY_bpm4eY_unrotated",
   "avg_bpm4aX_bpm4eX_unrotated",
   "avg_bpm4aY_bpm4eY_unrotated",
   "dd_bpm4aX_bpm4acX",
   "dd_bpm4aY_bpm4acY",
   "avg_bpm4aX_bpm4acX",
   "avg_bpm4aY_bpm4acY",
   "dd_bpm4aX_bpm4acX_unrotated",
   "dd_bpm4aY_bpm4acY_unrotated",
   "avg_bpm4aX_bpm4acX_unrotated",
   "avg_bpm4aY_bpm4acY_unrotated",
   "dd_bpm4aX_bpm4ecX",
   "dd_bpm4aY_bpm4ecY",
   "avg_bpm4aX_bpm4ecX",
   "avg_bpm4aY_bpm4ecY",
   "dd_bpm4aX_bpm4ecX_unrotated",
   "dd_bpm4aY_bpm4ecY_unrotated",
   "avg_bpm4aX_bpm4ecX_unrotated",
   "avg_bpm4aY_bpm4ecY_unrotated",
   "dd_bpm4eX_bpm4acX",
   "dd_bpm4eY_bpm4acY",
   "avg_bpm4eX_bpm4acX",
   "avg_bpm4eY_bpm4acY",
   "dd_bpm4eX_bpm4acX_unrotated",
   "dd_bpm4eY_bpm4acY_unrotated",
   "avg_bpm4eX_bpm4acX_unrotated",
   "avg_bpm4eY_bpm4acY_unrotated",
   "dd_bpm4eX_bpm4ecX",
   "dd_bpm4eY_bpm4ecY",
   "avg_bpm4eX_bpm4ecX",
   "avg_bpm4eY_bpm4ecY",
   "dd_bpm4eX_bpm4ecX_unrotated",
   "dd_bpm4eY_bpm4ecY_unrotated",
   "avg_bpm4eX_bpm4ecX_unrotated",
   "avg_bpm4eY_bpm4ecY_unrotated",
   "dd_bpm4acX_bpm4ecX",
   "dd_bpm4acY_bpm4ecY",
   "avg_bpm4acX_bpm4ecX",
   "avg_bpm4acY_bpm4ecY",
   "dd_bpm4acX_bpm4ecX_unrotated",
   "dd_bpm4acY_bpm4ecY_unrotated",
   "avg_bpm4acX_bpm4ecX_unrotated",
   "avg_bpm4acY_bpm4ecY_unrotated",
   "dd_bpm4aWS_bpm4e_WS",
   "avg_bpm4aWS_bpm4e_WS",
   "dd_bpm4aWS_bpm4ac_WS",
   "avg_bpm4aWS_bpm4ac_WS",
   "dd_bpm4aWS_bpm4ec_WS",
   "avg_bpm4aWS_bpm4ec_WS",
   "dd_bpm4aWS_bpm1_WS",
   "avg_bpm4aWS_bpm1_WS",
   "dd_bpm4aWS_bpm11_WS",
   "avg_bpm4aWS_bpm11_WS",
   "dd_bpm4aWS_bpm12_WS",
   "avg_bpm4aWS_bpm12_WS",
   "dd_bpm4eWS_bpm4ac_WS",
   "avg_bpm4eWS_bpm4ac_WS",
   "dd_bpm4eWS_bpm4ec_WS",
   "avg_bpm4eWS_bpm4ec_WS",
   "dd_bpm4eWS_bpm1_WS",
   "avg_bpm4eWS_bpm1_WS",
   "dd_bpm4eWS_bpm11_WS",
   "avg_bpm4eWS_bpm11_WS",
   "dd_bpm4eWS_bpm12_WS",
   "avg_bpm4eWS_bpm12_WS",
   "dd_bpm4acWS_bpm4ec_WS",
   "avg_bpm4acWS_bpm4ec_WS",
   "dd_bpm4acWS_bpm1_WS",
   "avg_bpm4acWS_bpm1_WS",
   "dd_bpm4acWS_bpm11_WS",
   "avg_bpm4acWS_bpm11_WS",
   "dd_bpm4acWS_bpm12_WS",
   "avg_bpm4acWS_bpm12_WS",
   "dd_bpm4ecWS_bpm1_WS",
   "avg_bpm4ecWS_bpm1_WS",
   "dd_bpm4ecWS_bpm11_WS",
   "avg_bpm4ecWS_bpm11_WS",
   "dd_bpm4ecWS_bpm12_WS",
   "avg_bpm4ecWS_bpm12_WS",
   "dd_bpm1WS_bpm11_WS",
   "avg_bpm1WS_bpm11_WS",
   "dd_bpm1WS_bpm12_WS",
   "avg_bpm1WS_bpm12_WS",
   "dd_bpm11WS_bpm12_WS",
   "avg_bpm11WS_bpm12_WS",
   "asym_battery1l","asym_battery2l","asym_battery1r","asym_battery2r",
   "asym_ch_battery_1","asym_ch_battery_2",
   "diff_battery1l","diff_battery2l","diff_battery1r","diff_battery2r",
   "diff_ch_battery_1","diff_ch_battery_2" ,
   "asym_atl1","asym_atl2","asym_atr1","asym_atr2",
   "asym_atl_avg",
   "asym_atl_dd",
   "asym_atr_avg",
   "asym_atr_dd",
   "asym_at1_avg",
   "asym_at1_dd",
   "asym_at2_avg",
   "asym_at2_dd",
   "asym_atl1r2_avg",
   "asym_atl1r2_dd",
   "asym_atr1l2_avg",
   "asym_atr1l2_dd",
   "asym_atl_dd_atr_dd_avg",
   "asym_atl_dd_atr_dd_dd",
   "asym_atl_avg_atr_avg_avg",
   "asym_atl_avg_atr_avg_dd",
   "reg_asym_atl1","reg_asym_atl2","reg_asym_atr1","reg_asym_atr2",
   "reg_asym_atl_avg",
   "reg_asym_atl_dd",
   "reg_asym_atr_avg",
   "reg_asym_atr_dd",
   "reg_asym_at1_avg",
   "reg_asym_at1_dd",
   "reg_asym_at2_avg",
   "reg_asym_at2_dd",
   "reg_asym_atl1r2_avg",
   "reg_asym_atl1r2_dd",
   "reg_asym_atr1l2_avg",
   "reg_asym_atr1l2_dd",
   "reg_asym_atl_dd_atr_dd_avg",
   "reg_asym_atl_dd_atr_dd_dd",
   "reg_asym_atl_avg_atr_avg_avg",
   "reg_asym_atl_avg_atr_avg_dd",
   "dit_asym_atl1","dit_asym_atl2","dit_asym_atr1","dit_asym_atr2",
   "dit_asym_atl_avg",
   "dit_asym_atl_dd",
   "dit_asym_atr_avg",
   "dit_asym_atr_dd",
   "dit_asym_at1_avg",
   "dit_asym_at1_dd",
   "dit_asym_at2_avg",
   "dit_asym_at2_dd",
   "dit_asym_atl1r2_avg",
   "dit_asym_atl1r2_dd",
   "dit_asym_atr1l2_avg",
   "dit_asym_atr1l2_dd",
   "dit_asym_atl_dd_atr_dd_avg",
   "dit_asym_atl_dd_atr_dd_dd",
   "dit_asym_atl_avg_atr_avg_avg",
   "dit_asym_atl_avg_atr_avg_dd",
   "reg_corr_asym_atl1","reg_corr_asym_atl2",
   "reg_corr_asym_atr1","reg_corr_asym_atr2",
   "reg_corr_asym_atl_avg",
   "reg_corr_asym_atl_dd",
   "reg_corr_asym_atr_avg",
   "reg_corr_asym_atr_dd",
   "reg_corr_asym_at1_avg",
   "reg_corr_asym_at1_dd",
   "reg_corr_asym_at2_avg",
   "reg_corr_asym_at2_dd",
   "reg_corr_asym_atl1r2_avg",
   "reg_corr_asym_atl1r2_dd",
   "reg_corr_asym_atr1l2_avg",
   "reg_corr_asym_atr1l2_dd",
   "reg_corr_asym_atl_dd_atr_dd_avg",
   "reg_corr_asym_atl_dd_atr_dd_dd",
   "reg_corr_asym_atl_avg_atr_avg_avg",
   "reg_corr_asym_atl_avg_atr_avg_dd",
   "dit_corr_asym_atl1","dit_corr_asym_atl2",
   "dit_corr_asym_atr1","dit_corr_asym_atr2",
   "dit_corr_asym_atl_avg",
   "dit_corr_asym_atl_dd",
   "dit_corr_asym_atr_avg",
   "dit_corr_asym_atr_dd",
   "dit_corr_asym_at1_avg",
   "dit_corr_asym_at1_dd",
   "dit_corr_asym_at2_avg",
   "dit_corr_asym_at2_dd",
   "dit_corr_asym_atl1r2_avg",
   "dit_corr_asym_atl1r2_dd",
   "dit_corr_asym_atr1l2_avg",
   "dit_corr_asym_atr1l2_dd",
   "dit_corr_asym_atl_dd_atr_dd_avg",
   "dit_corr_asym_atl_dd_atr_dd_dd",
   "dit_corr_asym_atl_avg_atr_avg_avg",
   "dit_corr_asym_atl_avg_atr_avg_dd"};

vector<TString> device_list_simple=
  {"reg_asym_us_avg","reg_asym_us_dd","reg_asym_usl","reg_asym_usr",
   "dit_asym_us_avg","dit_asym_us_dd_div2","dit_asym_usl","dit_asym_usr",
   "asym_us_avg","asym_us_dd","asym_usl","asym_usr",
   "reg_corr_asym_us_avg","reg_corr_asym_us_dd",
   "reg_corr_asym_usl","reg_corr_asym_usr",
   "dit_corr_asym_us_avg","dit_corr_asym_us_dd",
   "dit_corr_asym_usl","dit_corr_asym_usr",
   "reg_asym_ds_avg","reg_asym_ds_dd","reg_asym_dsl","reg_asym_dsr",
   "dit_asym_ds_avg","dit_asym_ds_dd_div2","dit_asym_dsl","dit_asym_dsr",
   "asym_ds_avg","asym_ds_dd","asym_dsl","asym_dsr",
   "reg_corr_asym_ds_avg","reg_corr_asym_ds_dd",
   "reg_corr_asym_dsl","reg_corr_asym_dsr",
   "dit_corr_asym_ds_avg","dit_corr_asym_ds_dd",
   "dit_corr_asym_dsl","dit_corr_asym_dsr",
   "diff_bpm4aX","diff_bpm4eX","diff_bpm4aY","diff_bpm4eY","diff_bpmE",
   "diff_bpm1X","diff_bpm1Y","diff_cav4cX","diff_cav4cY",
   "diff_bpm11X","diff_bpm11Y","diff_bpm12X","diff_bpm12Y",
   "diff_bpm4acX","diff_bpm4ecX","diff_bpm4acY","diff_bpm4ecY",
   "diff_bpm4aX_unrotated","diff_bpm4eX_unrotated",
   "diff_bpm4aY_unrotated","diff_bpm4eY_unrotated",
   "diff_bpm1X_unrotated","diff_bpm1Y_unrotated",
   "diff_bpm11X_unrotated","diff_bpm11Y_unrotated",
   "diff_bpm12X_unrotated","diff_bpm12Y_unrotated",
   "diff_bpm4acX_unrotated","diff_bpm4ecX_unrotated",
   "diff_bpm4acY_unrotated","diff_bpm4ecY_unrotated",
   "asym_bpm4aWS","asym_bpm4eWS",
   "asym_bpm11WS","asym_bpm12WS","asym_bpm1WS",
   "asym_bpm4acWS","asym_bpm4ecWS",
   "asym_bcm_an_us","asym_bcm_an_ds","asym_bcm_dg_us","asym_bcm_dg_ds",
   "asym_bcm_an_new","asym_bcm_an_ds3","asym_cav4cQ",
   "dd_bcm_an_us_bcm_an_ds",
   "avg_bcm_an_us_bcm_an_ds",
   "dd_bcm_an_us_bcm_dg_us",
   "avg_bcm_an_us_bcm_dg_us",
   "dd_bcm_an_us_bcm_dg_ds",
   "avg_bcm_an_us_bcm_dg_ds",
   "dd_bcm_an_us_bcm_an_new",
   "avg_bcm_an_us_bcm_an_new",
   "dd_bcm_an_us_cav4cQ",
   "avg_bcm_an_us_cav4cQ",
   "dd_bcm_an_ds_bcm_dg_us",
   "avg_bcm_an_ds_bcm_dg_us",
   "dd_bcm_an_ds_bcm_dg_ds",
   "avg_bcm_an_ds_bcm_dg_ds",
   "dd_bcm_an_ds_bcm_an_new",
   "avg_bcm_an_ds_bcm_an_new",
   "dd_bcm_an_ds_cav4cQ",
   "avg_bcm_an_ds_cav4cQ",
   "dd_bcm_dg_us_bcm_dg_ds",
   "avg_bcm_dg_us_bcm_dg_ds",
   "dd_bcm_dg_us_bcm_an_new",
   "avg_bcm_dg_us_bcm_an_new",
   "dd_bcm_dg_us_cav4cQ",
   "avg_bcm_dg_us_cav4cQ",
   "dd_bcm_dg_ds_bcm_an_new",
   "avg_bcm_dg_ds_bcm_an_new",
   "dd_bcm_dg_ds_cav4cQ",
   "avg_bcm_dg_ds_cav4cQ",
   "dd_bcm_an_new_cav4cQ",
   "avg_bcm_an_new_cav4cQ",
   "asym_battery1l","asym_battery2l","asym_battery1r","asym_battery2r",
   "asym_ch_battery_1","asym_ch_battery_2",
   "diff_battery1l","diff_battery2l","diff_battery1r","diff_battery2r",
   "diff_ch_battery_1","diff_ch_battery_2"};

