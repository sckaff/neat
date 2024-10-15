use eframe::{egui, NativeOptions};

// Declare the submodules directly
mod windows {
    pub mod network_visualizer;
    pub mod parameter_adjuster;
}

mod neuroevolution;

fn main() -> Result<(), eframe::Error> {
    let options = NativeOptions::default();
    eframe::run_native(
        "Logos - Neuroevolution Research",
        options,
        Box::new(|_cc| Ok(Box::new(MainApp::default()))),
    )
}

#[derive(Default)]
struct MainApp {
    show_network_window: bool,
    show_param_window: bool,
}

impl eframe::App for MainApp {
    fn update(&mut self, ctx: &egui::Context, _frame: &mut eframe::Frame) {
        egui::CentralPanel::default().show(ctx, |ui| {
            ui.heading("Logos - Neuroevolution Research");

            if ui.button("Open Network Visualizer").clicked() {
                self.show_network_window = true;
            }
            if ui.button("Open Parameter Adjuster").clicked() {
                self.show_param_window = true;
            }
        });

        if self.show_network_window {
            windows::network_visualizer::show(ctx, &mut self.show_network_window);
        }

        if self.show_param_window {
            windows::parameter_adjuster::show(ctx, &mut self.show_param_window);
        }
    }
}
